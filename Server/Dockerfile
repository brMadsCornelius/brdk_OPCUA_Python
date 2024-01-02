FROM python:3.9

COPY . .

RUN pip install -r requirements.txt

EXPOSE 4840
CMD ["python","./OpcuaServer.py"]