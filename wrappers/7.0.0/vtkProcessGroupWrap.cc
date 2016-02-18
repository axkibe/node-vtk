/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkProcessGroupWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkCommunicatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProcessGroupWrap::ptpl;

VtkProcessGroupWrap::VtkProcessGroupWrap()
{ }

VtkProcessGroupWrap::VtkProcessGroupWrap(vtkSmartPointer<vtkProcessGroup> _native)
{ native = _native; }

VtkProcessGroupWrap::~VtkProcessGroupWrap()
{ }

void VtkProcessGroupWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProcessGroup").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProcessGroup").ToLocalChecked(), ConstructorGetter);
}

void VtkProcessGroupWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProcessGroupWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProcessGroupWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddProcessId", AddProcessId);
	Nan::SetPrototypeMethod(tpl, "addProcessId", AddProcessId);

	Nan::SetPrototypeMethod(tpl, "Copy", Copy);
	Nan::SetPrototypeMethod(tpl, "copy", Copy);

	Nan::SetPrototypeMethod(tpl, "FindProcessId", FindProcessId);
	Nan::SetPrototypeMethod(tpl, "findProcessId", FindProcessId);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCommunicator", GetCommunicator);
	Nan::SetPrototypeMethod(tpl, "getCommunicator", GetCommunicator);

	Nan::SetPrototypeMethod(tpl, "GetLocalProcessId", GetLocalProcessId);
	Nan::SetPrototypeMethod(tpl, "getLocalProcessId", GetLocalProcessId);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfProcessIds", GetNumberOfProcessIds);
	Nan::SetPrototypeMethod(tpl, "getNumberOfProcessIds", GetNumberOfProcessIds);

	Nan::SetPrototypeMethod(tpl, "GetProcessId", GetProcessId);
	Nan::SetPrototypeMethod(tpl, "getProcessId", GetProcessId);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllProcessIds", RemoveAllProcessIds);
	Nan::SetPrototypeMethod(tpl, "removeAllProcessIds", RemoveAllProcessIds);

	Nan::SetPrototypeMethod(tpl, "RemoveProcessId", RemoveProcessId);
	Nan::SetPrototypeMethod(tpl, "removeProcessId", RemoveProcessId);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCommunicator", SetCommunicator);
	Nan::SetPrototypeMethod(tpl, "setCommunicator", SetCommunicator);

#ifdef VTK_NODE_PLUS_VTKPROCESSGROUPWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROCESSGROUPWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkProcessGroupWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProcessGroup> native = vtkSmartPointer<vtkProcessGroup>::New();
		VtkProcessGroupWrap* obj = new VtkProcessGroupWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProcessGroupWrap::AddProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddProcessId(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessGroupWrap::Copy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProcessGroupWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProcessGroupWrap *a0 = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Copy(
			(vtkProcessGroup *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessGroupWrap::FindProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FindProcessId(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessGroupWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProcessGroupWrap::GetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	vtkCommunicator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCommunicator();
	VtkCommunicatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCommunicatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommunicatorWrap *w = new VtkCommunicatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcessGroupWrap::GetLocalProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocalProcessId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProcessGroupWrap::GetNumberOfProcessIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfProcessIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProcessGroupWrap::GetProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetProcessId(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessGroupWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommunicatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommunicatorWrap *a0 = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Initialize(
			(vtkCommunicator *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Initialize(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessGroupWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
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

void VtkProcessGroupWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	vtkProcessGroup * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkProcessGroupWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProcessGroupWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProcessGroupWrap *w = new VtkProcessGroupWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcessGroupWrap::RemoveAllProcessIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllProcessIds();
}

void VtkProcessGroupWrap::RemoveProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RemoveProcessId(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessGroupWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProcessGroup * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkProcessGroupWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProcessGroupWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProcessGroupWrap *w = new VtkProcessGroupWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcessGroupWrap::SetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcessGroupWrap *wrapper = ObjectWrap::Unwrap<VtkProcessGroupWrap>(info.Holder());
	vtkProcessGroup *native = (vtkProcessGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommunicatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommunicatorWrap *a0 = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCommunicator(
			(vtkCommunicator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

