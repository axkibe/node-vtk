/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOutputWindowWrap.h"
#include "vtkFileOutputWindowWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFileOutputWindowWrap::ptpl;

VtkFileOutputWindowWrap::VtkFileOutputWindowWrap()
{ }

VtkFileOutputWindowWrap::VtkFileOutputWindowWrap(vtkSmartPointer<vtkFileOutputWindow> _native)
{ native = _native; }

VtkFileOutputWindowWrap::~VtkFileOutputWindowWrap()
{ }

void VtkFileOutputWindowWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFileOutputWindow").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FileOutputWindow").ToLocalChecked(), ConstructorGetter);
}

void VtkFileOutputWindowWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFileOutputWindowWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOutputWindowWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOutputWindowWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFileOutputWindowWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AppendOff", AppendOff);
	Nan::SetPrototypeMethod(tpl, "appendOff", AppendOff);

	Nan::SetPrototypeMethod(tpl, "AppendOn", AppendOn);
	Nan::SetPrototypeMethod(tpl, "appendOn", AppendOn);

	Nan::SetPrototypeMethod(tpl, "DisplayText", DisplayText);
	Nan::SetPrototypeMethod(tpl, "displayText", DisplayText);

	Nan::SetPrototypeMethod(tpl, "FlushOff", FlushOff);
	Nan::SetPrototypeMethod(tpl, "flushOff", FlushOff);

	Nan::SetPrototypeMethod(tpl, "FlushOn", FlushOn);
	Nan::SetPrototypeMethod(tpl, "flushOn", FlushOn);

	Nan::SetPrototypeMethod(tpl, "GetAppend", GetAppend);
	Nan::SetPrototypeMethod(tpl, "getAppend", GetAppend);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFlush", GetFlush);
	Nan::SetPrototypeMethod(tpl, "getFlush", GetFlush);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAppend", SetAppend);
	Nan::SetPrototypeMethod(tpl, "setAppend", SetAppend);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFlush", SetFlush);
	Nan::SetPrototypeMethod(tpl, "setFlush", SetFlush);

	ptpl.Reset( tpl );
}

void VtkFileOutputWindowWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFileOutputWindow> native = vtkSmartPointer<vtkFileOutputWindow>::New();
		VtkFileOutputWindowWrap* obj = new VtkFileOutputWindowWrap(native);
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

void VtkFileOutputWindowWrap::AppendOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AppendOff();
}

void VtkFileOutputWindowWrap::AppendOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AppendOn();
}

void VtkFileOutputWindowWrap::DisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DisplayText(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFileOutputWindowWrap::FlushOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlushOff();
}

void VtkFileOutputWindowWrap::FlushOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlushOn();
}

void VtkFileOutputWindowWrap::GetAppend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAppend();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFileOutputWindowWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFileOutputWindowWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFileOutputWindowWrap::GetFlush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFlush();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFileOutputWindowWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
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

void VtkFileOutputWindowWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	vtkFileOutputWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkFileOutputWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFileOutputWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFileOutputWindowWrap *w = new VtkFileOutputWindowWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFileOutputWindowWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFileOutputWindow * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkFileOutputWindowWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFileOutputWindowWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFileOutputWindowWrap *w = new VtkFileOutputWindowWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFileOutputWindowWrap::SetAppend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAppend(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFileOutputWindowWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFileOutputWindowWrap::SetFlush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFileOutputWindowWrap *wrapper = ObjectWrap::Unwrap<VtkFileOutputWindowWrap>(info.Holder());
	vtkFileOutputWindow *native = (vtkFileOutputWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFlush(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

