/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCommunicatorWrap.h"
#include "vtkSocketCommunicatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkClientSocketWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSocketCommunicatorWrap::ptpl;

VtkSocketCommunicatorWrap::VtkSocketCommunicatorWrap()
{ }

VtkSocketCommunicatorWrap::VtkSocketCommunicatorWrap(vtkSmartPointer<vtkSocketCommunicator> _native)
{ native = _native; }

VtkSocketCommunicatorWrap::~VtkSocketCommunicatorWrap()
{ }

void VtkSocketCommunicatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSocketCommunicator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SocketCommunicator").ToLocalChecked(), ConstructorGetter);
}

void VtkSocketCommunicatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSocketCommunicatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCommunicatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCommunicatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSocketCommunicatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Barrier", Barrier);
	Nan::SetPrototypeMethod(tpl, "barrier", Barrier);

	Nan::SetPrototypeMethod(tpl, "BufferCurrentMessage", BufferCurrentMessage);
	Nan::SetPrototypeMethod(tpl, "bufferCurrentMessage", BufferCurrentMessage);

	Nan::SetPrototypeMethod(tpl, "ClientSideHandshake", ClientSideHandshake);
	Nan::SetPrototypeMethod(tpl, "clientSideHandshake", ClientSideHandshake);

	Nan::SetPrototypeMethod(tpl, "CloseConnection", CloseConnection);
	Nan::SetPrototypeMethod(tpl, "closeConnection", CloseConnection);

	Nan::SetPrototypeMethod(tpl, "ConnectTo", ConnectTo);
	Nan::SetPrototypeMethod(tpl, "connectTo", ConnectTo);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIsConnected", GetIsConnected);
	Nan::SetPrototypeMethod(tpl, "getIsConnected", GetIsConnected);

	Nan::SetPrototypeMethod(tpl, "GetIsServer", GetIsServer);
	Nan::SetPrototypeMethod(tpl, "getIsServer", GetIsServer);

	Nan::SetPrototypeMethod(tpl, "GetPerformHandshake", GetPerformHandshake);
	Nan::SetPrototypeMethod(tpl, "getPerformHandshake", GetPerformHandshake);

	Nan::SetPrototypeMethod(tpl, "GetPerformHandshakeMaxValue", GetPerformHandshakeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPerformHandshakeMaxValue", GetPerformHandshakeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPerformHandshakeMinValue", GetPerformHandshakeMinValue);
	Nan::SetPrototypeMethod(tpl, "getPerformHandshakeMinValue", GetPerformHandshakeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetReportErrors", GetReportErrors);
	Nan::SetPrototypeMethod(tpl, "getReportErrors", GetReportErrors);

	Nan::SetPrototypeMethod(tpl, "GetSocket", GetSocket);
	Nan::SetPrototypeMethod(tpl, "getSocket", GetSocket);

	Nan::SetPrototypeMethod(tpl, "GetSwapBytesInReceivedData", GetSwapBytesInReceivedData);
	Nan::SetPrototypeMethod(tpl, "getSwapBytesInReceivedData", GetSwapBytesInReceivedData);

	Nan::SetPrototypeMethod(tpl, "GetVersion", GetVersion);
	Nan::SetPrototypeMethod(tpl, "getVersion", GetVersion);

	Nan::SetPrototypeMethod(tpl, "Handshake", Handshake);
	Nan::SetPrototypeMethod(tpl, "handshake", Handshake);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LogToFile", LogToFile);
	Nan::SetPrototypeMethod(tpl, "logToFile", LogToFile);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PerformHandshakeOff", PerformHandshakeOff);
	Nan::SetPrototypeMethod(tpl, "performHandshakeOff", PerformHandshakeOff);

	Nan::SetPrototypeMethod(tpl, "PerformHandshakeOn", PerformHandshakeOn);
	Nan::SetPrototypeMethod(tpl, "performHandshakeOn", PerformHandshakeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ServerSideHandshake", ServerSideHandshake);
	Nan::SetPrototypeMethod(tpl, "serverSideHandshake", ServerSideHandshake);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfProcesses", SetNumberOfProcesses);
	Nan::SetPrototypeMethod(tpl, "setNumberOfProcesses", SetNumberOfProcesses);

	Nan::SetPrototypeMethod(tpl, "SetPerformHandshake", SetPerformHandshake);
	Nan::SetPrototypeMethod(tpl, "setPerformHandshake", SetPerformHandshake);

	Nan::SetPrototypeMethod(tpl, "SetReportErrors", SetReportErrors);
	Nan::SetPrototypeMethod(tpl, "setReportErrors", SetReportErrors);

	Nan::SetPrototypeMethod(tpl, "SetSocket", SetSocket);
	Nan::SetPrototypeMethod(tpl, "setSocket", SetSocket);

	Nan::SetPrototypeMethod(tpl, "WaitForConnection", WaitForConnection);
	Nan::SetPrototypeMethod(tpl, "waitForConnection", WaitForConnection);

	ptpl.Reset( tpl );
}

void VtkSocketCommunicatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSocketCommunicator> native = vtkSmartPointer<vtkSocketCommunicator>::New();
		VtkSocketCommunicatorWrap* obj = new VtkSocketCommunicatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSocketCommunicatorWrap::Barrier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Barrier();
}

void VtkSocketCommunicatorWrap::BufferCurrentMessage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BufferCurrentMessage();
}

void VtkSocketCommunicatorWrap::ClientSideHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ClientSideHandshake();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::CloseConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CloseConnection();
}

void VtkSocketCommunicatorWrap::ConnectTo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ConnectTo(
				*a0,
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSocketCommunicatorWrap::GetIsConnected(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIsConnected();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::GetIsServer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIsServer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::GetPerformHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPerformHandshake();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::GetPerformHandshakeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPerformHandshakeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::GetPerformHandshakeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPerformHandshakeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::GetReportErrors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReportErrors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::GetSocket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	vtkClientSocket * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSocket();
		VtkClientSocketWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkClientSocketWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkClientSocketWrap *w = new VtkClientSocketWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSocketCommunicatorWrap::GetSwapBytesInReceivedData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSwapBytesInReceivedData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::GetVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVersion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::Handshake(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Handshake();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::LogToFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->LogToFile(
				*a0,
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->LogToFile(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	vtkSocketCommunicator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSocketCommunicatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSocketCommunicatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSocketCommunicatorWrap *w = new VtkSocketCommunicatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSocketCommunicatorWrap::PerformHandshakeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PerformHandshakeOff();
}

void VtkSocketCommunicatorWrap::PerformHandshakeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PerformHandshakeOn();
}

void VtkSocketCommunicatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSocketCommunicator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSocketCommunicatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSocketCommunicatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSocketCommunicatorWrap *w = new VtkSocketCommunicatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::ServerSideHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ServerSideHandshake();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketCommunicatorWrap::SetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfProcesses(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::SetPerformHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPerformHandshake(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::SetReportErrors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReportErrors(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::SetSocket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkClientSocketWrap::ptpl))->HasInstance(info[0]))
	{
		VtkClientSocketWrap *a0 = ObjectWrap::Unwrap<VtkClientSocketWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSocket(
			(vtkClientSocket *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCommunicatorWrap::WaitForConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info.Holder());
	vtkSocketCommunicator *native = (vtkSocketCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->WaitForConnection(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
