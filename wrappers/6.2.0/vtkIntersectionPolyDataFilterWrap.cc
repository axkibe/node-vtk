/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkIntersectionPolyDataFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIntersectionPolyDataFilterWrap::ptpl;

VtkIntersectionPolyDataFilterWrap::VtkIntersectionPolyDataFilterWrap()
{ }

VtkIntersectionPolyDataFilterWrap::VtkIntersectionPolyDataFilterWrap(vtkSmartPointer<vtkIntersectionPolyDataFilter> _native)
{ native = _native; }

VtkIntersectionPolyDataFilterWrap::~VtkIntersectionPolyDataFilterWrap()
{ }

void VtkIntersectionPolyDataFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIntersectionPolyDataFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IntersectionPolyDataFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkIntersectionPolyDataFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIntersectionPolyDataFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIntersectionPolyDataFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSplitFirstOutput", GetSplitFirstOutput);
	Nan::SetPrototypeMethod(tpl, "getSplitFirstOutput", GetSplitFirstOutput);

	Nan::SetPrototypeMethod(tpl, "GetSplitSecondOutput", GetSplitSecondOutput);
	Nan::SetPrototypeMethod(tpl, "getSplitSecondOutput", GetSplitSecondOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSplitFirstOutput", SetSplitFirstOutput);
	Nan::SetPrototypeMethod(tpl, "setSplitFirstOutput", SetSplitFirstOutput);

	Nan::SetPrototypeMethod(tpl, "SetSplitSecondOutput", SetSplitSecondOutput);
	Nan::SetPrototypeMethod(tpl, "setSplitSecondOutput", SetSplitSecondOutput);

	Nan::SetPrototypeMethod(tpl, "SplitFirstOutputOff", SplitFirstOutputOff);
	Nan::SetPrototypeMethod(tpl, "splitFirstOutputOff", SplitFirstOutputOff);

	Nan::SetPrototypeMethod(tpl, "SplitFirstOutputOn", SplitFirstOutputOn);
	Nan::SetPrototypeMethod(tpl, "splitFirstOutputOn", SplitFirstOutputOn);

	Nan::SetPrototypeMethod(tpl, "SplitSecondOutputOff", SplitSecondOutputOff);
	Nan::SetPrototypeMethod(tpl, "splitSecondOutputOff", SplitSecondOutputOff);

	Nan::SetPrototypeMethod(tpl, "SplitSecondOutputOn", SplitSecondOutputOn);
	Nan::SetPrototypeMethod(tpl, "splitSecondOutputOn", SplitSecondOutputOn);

	ptpl.Reset( tpl );
}

void VtkIntersectionPolyDataFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIntersectionPolyDataFilter> native = vtkSmartPointer<vtkIntersectionPolyDataFilter>::New();
		VtkIntersectionPolyDataFilterWrap* obj = new VtkIntersectionPolyDataFilterWrap(native);
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

void VtkIntersectionPolyDataFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIntersectionPolyDataFilterWrap::GetSplitFirstOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplitFirstOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIntersectionPolyDataFilterWrap::GetSplitSecondOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplitSecondOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIntersectionPolyDataFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkIntersectionPolyDataFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	vtkIntersectionPolyDataFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkIntersectionPolyDataFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIntersectionPolyDataFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIntersectionPolyDataFilterWrap *w = new VtkIntersectionPolyDataFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIntersectionPolyDataFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIntersectionPolyDataFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkIntersectionPolyDataFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIntersectionPolyDataFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIntersectionPolyDataFilterWrap *w = new VtkIntersectionPolyDataFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIntersectionPolyDataFilterWrap::SetSplitFirstOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplitFirstOutput(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIntersectionPolyDataFilterWrap::SetSplitSecondOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplitSecondOutput(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIntersectionPolyDataFilterWrap::SplitFirstOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SplitFirstOutputOff();
}

void VtkIntersectionPolyDataFilterWrap::SplitFirstOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SplitFirstOutputOn();
}

void VtkIntersectionPolyDataFilterWrap::SplitSecondOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SplitSecondOutputOff();
}

void VtkIntersectionPolyDataFilterWrap::SplitSecondOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntersectionPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkIntersectionPolyDataFilterWrap>(info.Holder());
	vtkIntersectionPolyDataFilter *native = (vtkIntersectionPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SplitSecondOutputOn();
}

