import cv2
from cvzone.FaceDetectionModule import  FaceDetector
from cvzone.SerialModule import SerialObject


cap = cv2.VideoCapture(0)
detector = FaceDetector(0.8)
arduino = SerialObject()

while True:
    success , image = cap.read()
    image , bboxe = detector.findFaces(image)
    if bboxe :
        arduino.sendData([1])
    else:
        arduino.sendData([0])
    cv2.imshow("image" , image)
    cv2.waitKey(1)
    