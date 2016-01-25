/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkDataSetTriangleFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDataSetTriangleFilterWrap::constructor;

VtkDataSetTriangleFilterWrap::VtkDataSetTriangleFilterWrap()
{ }

VtkDataSetTriangleFilterWrap::VtkDataSetTriangleFilterWrap(vtkSmartPointer<vtkDataSetTriangleFilter> _native)
{ native = _native; }

VtkDataSetTriangleFilterWrap::~VtkDataSetTriangleFilterWrap()
{ }

void VtkDataSetTriangleFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkDataSetTriangleFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkUnstructuredGridAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkDataSetTriangleFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DataSetTriangleFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkDataSetTriangleFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTetrahedraOnly", GetTetrahedraOnly);
	Nan::SetPrototypeMethod(tpl, "getTetrahedraOnly", GetTetrahedraOnly);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTetrahedraOnly", SetTetrahedraOnly);
	Nan::SetPrototypeMethod(tpl, "setTetrahedraOnly", SetTetrahedraOnly);

	Nan::SetPrototypeMethod(tpl, "TetrahedraOnlyOff", TetrahedraOnlyOff);
	Nan::SetPrototypeMethod(tpl, "tetrahedraOnlyOff", TetrahedraOnlyOff);

	Nan::SetPrototypeMethod(tpl, "TetrahedraOnlyOn", TetrahedraOnlyOn);
	Nan::SetPrototypeMethod(tpl, "tetrahedraOnlyOn", TetrahedraOnlyOn);

}

void VtkDataSetTriangleFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataSetTriangleFilter> native = vtkSmartPointer<vtkDataSetTriangleFilter>::New();
		VtkDataSetTriangleFilterWrap* obj = new VtkDataSetTriangleFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataSetTriangleFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataSetTriangleFilterWrap::GetTetrahedraOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTetrahedraOnly();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetTriangleFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
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

void VtkDataSetTriangleFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	vtkDataSetTriangleFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataSetTriangleFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetTriangleFilterWrap *w = new VtkDataSetTriangleFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetTriangleFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataSetTriangleFilter * r;
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
			Nan::New<v8::Function>(VtkDataSetTriangleFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetTriangleFilterWrap *w = new VtkDataSetTriangleFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetTriangleFilterWrap::SetTetrahedraOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTetrahedraOnly(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetTriangleFilterWrap::TetrahedraOnlyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TetrahedraOnlyOff();
}

void VtkDataSetTriangleFilterWrap::TetrahedraOnlyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetTriangleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetTriangleFilterWrap>(info.Holder());
	vtkDataSetTriangleFilter *native = (vtkDataSetTriangleFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TetrahedraOnlyOn();
}

