FROM python:3.9

ADD OpcuaServer.py .

COPY requirements.txt .

RUN pip install -r requirements.txt

CMD ["python","./OpcuaServer.py"]