/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkFunctionSetWrap.h"
#include "vtkCachingInterpolatedVelocityFieldWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCachingInterpolatedVelocityFieldWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCachingInterpolatedVelocityFieldWrap::ptpl;

VtkCachingInterpolatedVelocityFieldWrap::VtkCachingInterpolatedVelocityFieldWrap()
{ }

VtkCachingInterpolatedVelocityFieldWrap::VtkCachingInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkCachingInterpolatedVelocityField> _native)
{ native = _native; }

VtkCachingInterpolatedVelocityFieldWrap::~VtkCachingInterpolatedVelocityFieldWrap()
{ }

void VtkCachingInterpolatedVelocityFieldWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkFunctionSetWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkFunctionSetWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCachingInterpolatedVelocityFieldWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCachingInterpolatedVelocityField").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CachingInterpolatedVelocityField").ToLocalChecked(),tpl->GetFunction());
}

void VtkCachingInterpolatedVelocityFieldWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "ClearLastCellInfo", ClearLastCellInfo);
	Nan::SetPrototypeMethod(tpl, "clearLastCellInfo", ClearLastCellInfo);

	Nan::SetPrototypeMethod(tpl, "GetCacheMiss", GetCacheMiss);
	Nan::SetPrototypeMethod(tpl, "getCacheMiss", GetCacheMiss);

	Nan::SetPrototypeMethod(tpl, "GetCellCacheHit", GetCellCacheHit);
	Nan::SetPrototypeMethod(tpl, "getCellCacheHit", GetCellCacheHit);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataSetCacheHit", GetDataSetCacheHit);
	Nan::SetPrototypeMethod(tpl, "getDataSetCacheHit", GetDataSetCacheHit);

	Nan::SetPrototypeMethod(tpl, "GetVectorsSelection", GetVectorsSelection);
	Nan::SetPrototypeMethod(tpl, "getVectorsSelection", GetVectorsSelection);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectVectors", SelectVectors);
	Nan::SetPrototypeMethod(tpl, "selectVectors", SelectVectors);

}

void VtkCachingInterpolatedVelocityFieldWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCachingInterpolatedVelocityField> native = vtkSmartPointer<vtkCachingInterpolatedVelocityField>::New();
		VtkCachingInterpolatedVelocityFieldWrap* obj = new VtkCachingInterpolatedVelocityFieldWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCachingInterpolatedVelocityFieldWrap::ClearLastCellInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearLastCellInfo();
}

void VtkCachingInterpolatedVelocityFieldWrap::GetCacheMiss(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCacheMiss();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCachingInterpolatedVelocityFieldWrap::GetCellCacheHit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellCacheHit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCachingInterpolatedVelocityFieldWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCachingInterpolatedVelocityFieldWrap::GetDataSetCacheHit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSetCacheHit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCachingInterpolatedVelocityFieldWrap::GetVectorsSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorsSelection();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCachingInterpolatedVelocityFieldWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkCachingInterpolatedVelocityFieldWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkCachingInterpolatedVelocityField * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCachingInterpolatedVelocityFieldWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCachingInterpolatedVelocityFieldWrap *w = new VtkCachingInterpolatedVelocityFieldWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCachingInterpolatedVelocityFieldWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCachingInterpolatedVelocityField * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCachingInterpolatedVelocityFieldWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCachingInterpolatedVelocityFieldWrap *w = new VtkCachingInterpolatedVelocityFieldWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCachingInterpolatedVelocityFieldWrap::SelectVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachingInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCachingInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCachingInterpolatedVelocityField *native = (vtkCachingInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SelectVectors(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

