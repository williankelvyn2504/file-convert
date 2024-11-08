# File Converter using FFmpeg

This is a simple C++ program that converts media files (such as MP4, MKV, etc.) from one format to another using FFmpeg. The program asks the user for the input file path and the output file path, and then performs the conversion.

## Features

- Converts media files to other formats using FFmpeg.
- Checks if the input file exists.
- Displays success or error messages based on the conversion result.

## Requirements

- **FFmpeg**: Make sure FFmpeg is installed on your system. You can download FFmpeg from the [official FFmpeg website](https://ffmpeg.org/download.html).
- **C++17**: The program uses C++17 features, so a compatible compiler (e.g., GCC 7.0 or higher) is required.

## How to Run

1. Clone this repository or download the source code.
2. Ensure FFmpeg is installed and accessible in your system's PATH.
3. Compile the code using a C++17 compatible compiler:

   ```bash
   g++ -o file_converter file_converter.cpp

4. Run the program:
   
   ```bash
   ./file_converter
   ```


5. The program will prompt you to enter the input file path and the output file path:
   ```bash
    Enter the path of the input file: /path/to/input/file.jpg
    Enter the path of the output file: /path/to/output/file.mp4
   ```


After the conversion is completed, the program will display a success or error message.

## How It Works

1. The program checks if the input file exists.


2. It generates and executes the FFmpeg command based on the provided paths.


3. If the conversion is successful, a success message is displayed.


4. Otherwise, an error message is shown.



## Customization

You can modify the FFmpeg command in the convertFile function to change encoding options, output resolution, or other FFmpeg parameters as needed.

## Troubleshooting

Input file not found: Make sure the input file path is correct and the file exists.

Error trying to convert the file: Verify that FFmpeg is installed correctly and the generated command is correct.

Generic error: Ensure the output path is correct and you have write permissions for the destination.