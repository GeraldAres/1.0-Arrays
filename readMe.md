dAIbetes – Retinal Image Diagnostic Support System
👥 Development Team
Angela Jahziel Encabo — Lead Developer
Harold Shichiya I. Amistad — Backend Developer
Gerald Ares — Frontend Developer
Ycia Debby Magnanao — Backend & Database Management
Jhen Aloyon — Backend & Database Management
👁️ Vision

Diabetic retinopathy and glaucoma are leading causes of preventable blindness due to late detection of retinal abnormalities.

dAIbetes is a dual-sided AI-assisted medical decision-support system that combines Digital Image Processing (DIP) and Computer-Aided Diagnosis (CAD) to assist doctors in early and accurate detection of eye diseases.
It ensures that all AI-generated outputs are verified through a human-in-the-loop validation system before reaching patients.

🚀 Key Features

🩺 For Doctors
Intelligent Image Enhancement (CLAHE, Gaussian Blur, Grayscale)
AI Detection System (Rule-based + CNN models)
Coordinate-based visual overlays for abnormalities
Human-in-the-loop validation before diagnosis release

👤 For Patients
Secure diagnostic results portal
Historical eye health tracking
Simplified explanations of medical findings
🛠️ System Architecture
MVVM-Based Architecture

dAIbetes is built using the MVVM (Model–View–ViewModel) pattern to separate UI, logic, and processing layers.

🧠 Architecture Diagram (Core System Flow)
+----------------------+
|      JavaFX UI       |
|   (FXML Views)       |
+----------+-----------+
|
v
+----------------------+
|   ViewModel Layer    |
|  (Bindings / Logic)  |
+----------+-----------+
|
---------------------------------------
|                                     |
v                                     v
+----------------------+          +----------------------+
|   Image Processing   |          |   Database Layer     |
| (Python Bridge)      |          |   MySQL (JDBC)       |
| OpenCV + CNN Models  |          | Singleton Pattern    |
+----------+-----------+          +----------+-----------+
|                                 |
v                                 v
+-------------------+           +----------------------+
| Detection Engine   |           | Patient Records      |
| (AI + Rules)      |           | & Reports Storage     |
+-------------------+           +----------------------+

💻 Tech Stack
Core Technologies
Java 17+
JavaFX (FXML + Property Binding)
Maven
Backend & Processing
Python (OpenCV + TensorFlow CNN)
JDBC (MySQL Integration)
Database
MySQL 8.0+

🧠 OOP & Design Patterns
Object-Oriented Principles
Inheritance: User → Doctor / Patient
Encapsulation: Modular medical data structures
Polymorphism: Role-based system behavior
Design Patterns
Singleton → Single MySQL connection instance
Decorator → Dynamic image filter chaining
Strategy → Switchable AI detection models
MVVM → UI and logic separation

📂 Project Structure
src/main/java/org/daibetes/
├── controller/
├── model/
├── viewmodel/
├── util/
└── Main.java
🏁 Getting Started

Requirements
Java 17+
Maven
MySQL 8+
Python 3.9+ (OpenCV, TensorFlow)

Installation
git clone https://github.com/dalrho/dAIbetes.git

# Import database schema
resources/db_schema.sql

# Run project
mvn clean javafx:run
🎯 System Goals
Early detection of retinal diseases
AI-assisted medical decision support
Secure patient data handling
Scalable and maintainable architecture

📌 Summary

dAIbetes is a medical AI decision-support system that combines image processing, machine learning, and structured software architecture to assist doctors in making faster and more accurate diagnoses while keeping final control in human hands.
