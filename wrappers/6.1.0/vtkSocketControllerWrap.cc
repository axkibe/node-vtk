/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiProcessControllerWrap.h"
#include "vtkSocketControllerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSocketCommunicatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSocketControllerWrap::ptpl;

VtkSocketControllerWrap::VtkSocketControllerWrap()
{ }

VtkSocketControllerWrap::VtkSocketControllerWrap(vtkSmartPointer<vtkSocketController> _native)
{ native = _native; }

VtkSocketControllerWrap::~VtkSocketControllerWrap()
{ }

void VtkSocketControllerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSocketController").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SocketController").ToLocalChecked(), ConstructorGetter);
}

void VtkSocketControllerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSocketControllerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiProcessControllerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSocketControllerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CloseConnection", CloseConnection);
	Nan::SetPrototypeMethod(tpl, "closeConnection", CloseConnection);

	Nan::SetPrototypeMethod(tpl, "ConnectTo", ConnectTo);
	Nan::SetPrototypeMethod(tpl, "connectTo", ConnectTo);

	Nan::SetPrototypeMethod(tpl, "CreateCompliantController", CreateCompliantController);
	Nan::SetPrototypeMethod(tpl, "createCompliantController", CreateCompliantController);

	Nan::SetPrototypeMethod(tpl, "CreateOutputWindow", CreateOutputWindow);
	Nan::SetPrototypeMethod(tpl, "createOutputWindow", CreateOutputWindow);

	Nan::SetPrototypeMethod(tpl, "Finalize", Finalize);
	Nan::SetPrototypeMethod(tpl, "finalize", Finalize);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSwapBytesInReceivedData", GetSwapBytesInReceivedData);
	Nan::SetPrototypeMethod(tpl, "getSwapBytesInReceivedData", GetSwapBytesInReceivedData);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MultipleMethodExecute", MultipleMethodExecute);
	Nan::SetPrototypeMethod(tpl, "multipleMethodExecute", MultipleMethodExecute);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCommunicator", SetCommunicator);
	Nan::SetPrototypeMethod(tpl, "setCommunicator", SetCommunicator);

	Nan::SetPrototypeMethod(tpl, "SingleMethodExecute", SingleMethodExecute);
	Nan::SetPrototypeMethod(tpl, "singleMethodExecute", SingleMethodExecute);

	Nan::SetPrototypeMethod(tpl, "WaitForConnection", WaitForConnection);
	Nan::SetPrototypeMethod(tpl, "waitForConnection", WaitForConnection);

	ptpl.Reset( tpl );
}

void VtkSocketControllerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSocketController> native = vtkSmartPointer<vtkSocketController>::New();
		VtkSocketControllerWrap* obj = new VtkSocketControllerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSocketControllerWrap::CloseConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CloseConnection();
}

void VtkSocketControllerWrap::ConnectTo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
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

void VtkSocketControllerWrap::CreateCompliantController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateCompliantController();
		VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSocketControllerWrap::CreateOutputWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateOutputWindow();
}

void VtkSocketControllerWrap::Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Finalize(
			info[0]->Int32Value()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Finalize();
}

void VtkSocketControllerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSocketControllerWrap::GetSwapBytesInReceivedData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSwapBytesInReceivedData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSocketControllerWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkSocketControllerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
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

void VtkSocketControllerWrap::MultipleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MultipleMethodExecute();
}

void VtkSocketControllerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	vtkSocketController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSocketControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSocketControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSocketControllerWrap *w = new VtkSocketControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSocketControllerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSocketController * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSocketControllerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSocketControllerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSocketControllerWrap *w = new VtkSocketControllerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketControllerWrap::SetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSocketCommunicatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSocketCommunicatorWrap *a0 = ObjectWrap::Unwrap<VtkSocketCommunicatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCommunicator(
			(vtkSocketCommunicator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketControllerWrap::SingleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleMethodExecute();
}

void VtkSocketControllerWrap::WaitForConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketControllerWrap *wrapper = ObjectWrap::Unwrap<VtkSocketControllerWrap>(info.Holder());
	vtkSocketController *native = (vtkSocketController *)wrapper->native.GetPointer();
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
