%av cam list
camList = webcamlist;

disp('Available webcams:');
disp(camList);

% Select 4n webcam
cam = webcam(2); 

while true
    % Capture
    I = snapshot(cam);
    
    % image to grayscale
    grayImage = rgb2gray(I);
    
    % original grayscale image
    figure(1);  
    imshow(grayImage);
    title('Grayscale Image of Solar Panel');
    
  
    thresholdValue = 0.6;  % threshold 
    dustBW = imbinarize(grayImage, thresholdValue);

    
    
    % binary image
    figure(2);  
    imshow(dustBW);
    title('Binary Image Showing Detected Dust');
    
   
    dustCoverage = sum(dustBW(:)) / numel(dustBW) * 100;
    
    % dust coverage precenatage
    if dustCoverage > 2
        result = 1;
    else
        result = 0;
    end
    
    % Display the data
    fprintf('Dust Coverage: %.2f%%\n', dustCoverage);
    fprintf('Dust Detected (more than 30%% coverage): %d\n', result);
    
    % Write to a text file
    fid = fopen('C:\Users\minid\OneDrive\Desktop\a.txt', 'w');
    fprintf(fid, '%d', result);
    fclose(fid);
    
   
    pause(30);
end

clear cam;


