/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkBlankStructuredGridWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBlankStructuredGridWrap::ptpl;

VtkBlankStructuredGridWrap::VtkBlankStructuredGridWrap()
{ }

VtkBlankStructuredGridWrap::VtkBlankStructuredGridWrap(vtkSmartPointer<vtkBlankStructuredGrid> _native)
{ native = _native; }

VtkBlankStructuredGridWrap::~VtkBlankStructuredGridWrap()
{ }

void VtkBlankStructuredGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBlankStructuredGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BlankStructuredGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkBlankStructuredGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBlankStructuredGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBlankStructuredGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetArrayId", GetArrayId);
	Nan::SetPrototypeMethod(tpl, "getArrayId", GetArrayId);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComponent", GetComponent);
	Nan::SetPrototypeMethod(tpl, "getComponent", GetComponent);

	Nan::SetPrototypeMethod(tpl, "GetComponentMaxValue", GetComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getComponentMaxValue", GetComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetComponentMinValue", GetComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getComponentMinValue", GetComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxBlankingValue", GetMaxBlankingValue);
	Nan::SetPrototypeMethod(tpl, "getMaxBlankingValue", GetMaxBlankingValue);

	Nan::SetPrototypeMethod(tpl, "GetMinBlankingValue", GetMinBlankingValue);
	Nan::SetPrototypeMethod(tpl, "getMinBlankingValue", GetMinBlankingValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayId", SetArrayId);
	Nan::SetPrototypeMethod(tpl, "setArrayId", SetArrayId);

	Nan::SetPrototypeMethod(tpl, "SetArrayName", SetArrayName);
	Nan::SetPrototypeMethod(tpl, "setArrayName", SetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetComponent", SetComponent);
	Nan::SetPrototypeMethod(tpl, "setComponent", SetComponent);

	Nan::SetPrototypeMethod(tpl, "SetMaxBlankingValue", SetMaxBlankingValue);
	Nan::SetPrototypeMethod(tpl, "setMaxBlankingValue", SetMaxBlankingValue);

	Nan::SetPrototypeMethod(tpl, "SetMinBlankingValue", SetMinBlankingValue);
	Nan::SetPrototypeMethod(tpl, "setMinBlankingValue", SetMinBlankingValue);

	ptpl.Reset( tpl );
}

void VtkBlankStructuredGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBlankStructuredGrid> native = vtkSmartPointer<vtkBlankStructuredGrid>::New();
		VtkBlankStructuredGridWrap* obj = new VtkBlankStructuredGridWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBlankStructuredGridWrap::GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBlankStructuredGridWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBlankStructuredGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBlankStructuredGridWrap::GetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBlankStructuredGridWrap::GetComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBlankStructuredGridWrap::GetComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBlankStructuredGridWrap::GetMaxBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxBlankingValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBlankStructuredGridWrap::GetMinBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinBlankingValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBlankStructuredGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
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

void VtkBlankStructuredGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	vtkBlankStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBlankStructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBlankStructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBlankStructuredGridWrap *w = new VtkBlankStructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBlankStructuredGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBlankStructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBlankStructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBlankStructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBlankStructuredGridWrap *w = new VtkBlankStructuredGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBlankStructuredGridWrap::SetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayId(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBlankStructuredGridWrap::SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBlankStructuredGridWrap::SetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBlankStructuredGridWrap::SetMaxBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxBlankingValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBlankStructuredGridWrap::SetMinBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBlankStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkBlankStructuredGridWrap>(info.Holder());
	vtkBlankStructuredGrid *native = (vtkBlankStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinBlankingValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

