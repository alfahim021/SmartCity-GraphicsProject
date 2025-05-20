# Smart City Graphics Project

This project is a computer graphics simulation of a Smart City using OpenGL and GLUT. It features animated vehicles, trains, boats, day-night transitions, weather effects like rain and snow, and interactive zooming for dynamic scene views.

---

## Folder Structure

```
SmartCity-GraphicsProject/
│
├── code/
│   └── main.cpp          # Main OpenGL source code
│
├── report/
│   └── SmartCity.docx    # Project report document
│
├── README.md             # Project overview and instructions
│
└── .gitignore            # Optional, to ignore binaries or temp files
```

---

## Features

- Moving cars, ambulances, police cars, and SUVs  
- Left-right and right-left train animations  
- Ships, speedboats, and flowing river water  
- Flickering street lamps and detailed urban elements  
- Smooth day-night transitions  
- Weather effects: rain and snowfall  
- Zoom functionality to view the city scene dynamically  

---

## How to Build and Run

Make sure you have OpenGL, GLUT, and freeglut libraries installed on your system.

### Compile (Linux/Mac):

```bash
g++ code/main.cpp -o SmartCity -lGL -lGLU -lglut
./SmartCity
```

### Compile (Windows with MinGW):

```bash
g++ code/main.cpp -o SmartCity.exe -lfreeglut -lopengl32 -lglu32
SmartCity.exe
```

---

## Dependencies

- OpenGL  
- GLUT / freeglut  
- C++ Compiler (g++ recommended)  

---

## Project Report

See the `report/SmartCity.docx` file for a detailed project report describing the design, implementation, and features.

---

## Author

Al Fahim

---

## License

[Specify your license, e.g., MIT License, or leave blank if none]
