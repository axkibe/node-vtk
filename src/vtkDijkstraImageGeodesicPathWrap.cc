/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDijkstraGraphGeodesicPathWrap.h"
#include "vtkDijkstraImageGeodesicPathWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDijkstraImageGeodesicPathWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDijkstraImageGeodesicPathWrap::ptpl;

VtkDijkstraImageGeodesicPathWrap::VtkDijkstraImageGeodesicPathWrap()
{ }

VtkDijkstraImageGeodesicPathWrap::VtkDijkstraImageGeodesicPathWrap(vtkSmartPointer<vtkDijkstraImageGeodesicPath> _native)
{ native = _native; }

VtkDijkstraImageGeodesicPathWrap::~VtkDijkstraImageGeodesicPathWrap()
{ }

void VtkDijkstraImageGeodesicPathWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDijkstraGraphGeodesicPathWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDijkstraGraphGeodesicPathWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkDijkstraImageGeodesicPathWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkDijkstraImageGeodesicPath").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DijkstraImageGeodesicPath").ToLocalChecked(),tpl->GetFunction());
}

void VtkDijkstraImageGeodesicPathWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurvatureWeight", GetCurvatureWeight);
	Nan::SetPrototypeMethod(tpl, "getCurvatureWeight", GetCurvatureWeight);

	Nan::SetPrototypeMethod(tpl, "GetCurvatureWeightMaxValue", GetCurvatureWeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCurvatureWeightMaxValue", GetCurvatureWeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCurvatureWeightMinValue", GetCurvatureWeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getCurvatureWeightMinValue", GetCurvatureWeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetEdgeLengthWeight", GetEdgeLengthWeight);
	Nan::SetPrototypeMethod(tpl, "getEdgeLengthWeight", GetEdgeLengthWeight);

	Nan::SetPrototypeMethod(tpl, "GetImageWeight", GetImageWeight);
	Nan::SetPrototypeMethod(tpl, "getImageWeight", GetImageWeight);

	Nan::SetPrototypeMethod(tpl, "GetInputAsImageData", GetInputAsImageData);
	Nan::SetPrototypeMethod(tpl, "getInputAsImageData", GetInputAsImageData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurvatureWeight", SetCurvatureWeight);
	Nan::SetPrototypeMethod(tpl, "setCurvatureWeight", SetCurvatureWeight);

	Nan::SetPrototypeMethod(tpl, "SetEdgeLengthWeight", SetEdgeLengthWeight);
	Nan::SetPrototypeMethod(tpl, "setEdgeLengthWeight", SetEdgeLengthWeight);

	Nan::SetPrototypeMethod(tpl, "SetImageWeight", SetImageWeight);
	Nan::SetPrototypeMethod(tpl, "setImageWeight", SetImageWeight);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

}

void VtkDijkstraImageGeodesicPathWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDijkstraImageGeodesicPath> native = vtkSmartPointer<vtkDijkstraImageGeodesicPath>::New();
		VtkDijkstraImageGeodesicPathWrap* obj = new VtkDijkstraImageGeodesicPathWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDijkstraImageGeodesicPathWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDijkstraImageGeodesicPathWrap::GetCurvatureWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurvatureWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDijkstraImageGeodesicPathWrap::GetCurvatureWeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurvatureWeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDijkstraImageGeodesicPathWrap::GetCurvatureWeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurvatureWeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDijkstraImageGeodesicPathWrap::GetEdgeLengthWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeLengthWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDijkstraImageGeodesicPathWrap::GetImageWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDijkstraImageGeodesicPathWrap::GetInputAsImageData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputAsImageData();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDijkstraImageGeodesicPathWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
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

void VtkDijkstraImageGeodesicPathWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	vtkDijkstraImageGeodesicPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDijkstraImageGeodesicPathWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDijkstraImageGeodesicPathWrap *w = new VtkDijkstraImageGeodesicPathWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDijkstraImageGeodesicPathWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDijkstraImageGeodesicPath * r;
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
			Nan::New<v8::Function>(VtkDijkstraImageGeodesicPathWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDijkstraImageGeodesicPathWrap *w = new VtkDijkstraImageGeodesicPathWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDijkstraImageGeodesicPathWrap::SetCurvatureWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurvatureWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDijkstraImageGeodesicPathWrap::SetEdgeLengthWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeLengthWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDijkstraImageGeodesicPathWrap::SetImageWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDijkstraImageGeodesicPathWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDijkstraImageGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkDijkstraImageGeodesicPathWrap>(info.Holder());
	vtkDijkstraImageGeodesicPath *native = (vtkDijkstraImageGeodesicPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
