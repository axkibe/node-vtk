/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWarpTransformWrap.h"
#include "vtkGridTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGridTransformWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGridTransformWrap::ptpl;

VtkGridTransformWrap::VtkGridTransformWrap()
{ }

VtkGridTransformWrap::VtkGridTransformWrap(vtkSmartPointer<vtkGridTransform> _native)
{ native = _native; }

VtkGridTransformWrap::~VtkGridTransformWrap()
{ }

void VtkGridTransformWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWarpTransformWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWarpTransformWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkGridTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkGridTransform").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GridTransform").ToLocalChecked(),tpl->GetFunction());
}

void VtkGridTransformWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementGrid", GetDisplacementGrid);
	Nan::SetPrototypeMethod(tpl, "getDisplacementGrid", GetDisplacementGrid);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementScale", GetDisplacementScale);
	Nan::SetPrototypeMethod(tpl, "getDisplacementScale", GetDisplacementScale);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementShift", GetDisplacementShift);
	Nan::SetPrototypeMethod(tpl, "getDisplacementShift", GetDisplacementShift);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationMode", GetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "getInterpolationMode", GetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationModeAsString", GetInterpolationModeAsString);
	Nan::SetPrototypeMethod(tpl, "getInterpolationModeAsString", GetInterpolationModeAsString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeTransform", MakeTransform);
	Nan::SetPrototypeMethod(tpl, "makeTransform", MakeTransform);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementGridConnection", SetDisplacementGridConnection);
	Nan::SetPrototypeMethod(tpl, "setDisplacementGridConnection", SetDisplacementGridConnection);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementGridData", SetDisplacementGridData);
	Nan::SetPrototypeMethod(tpl, "setDisplacementGridData", SetDisplacementGridData);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementScale", SetDisplacementScale);
	Nan::SetPrototypeMethod(tpl, "setDisplacementScale", SetDisplacementScale);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementShift", SetDisplacementShift);
	Nan::SetPrototypeMethod(tpl, "setDisplacementShift", SetDisplacementShift);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationMode", SetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "setInterpolationMode", SetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToCubic", SetInterpolationModeToCubic);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToCubic", SetInterpolationModeToCubic);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToLinear", SetInterpolationModeToLinear);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToLinear", SetInterpolationModeToLinear);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToNearestNeighbor", SetInterpolationModeToNearestNeighbor);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToNearestNeighbor", SetInterpolationModeToNearestNeighbor);

}

void VtkGridTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGridTransform> native = vtkSmartPointer<vtkGridTransform>::New();
		VtkGridTransformWrap* obj = new VtkGridTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGridTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGridTransformWrap::GetDisplacementGrid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementGrid();
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

void VtkGridTransformWrap::GetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGridTransformWrap::GetDisplacementShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGridTransformWrap::GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGridTransformWrap::GetInterpolationModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGridTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
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

void VtkGridTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->MakeTransform();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGridTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	vtkGridTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGridTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGridTransformWrap *w = new VtkGridTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGridTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGridTransform * r;
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
			Nan::New<v8::Function>(VtkGridTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGridTransformWrap *w = new VtkGridTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGridTransformWrap::SetDisplacementGridConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementGridConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGridTransformWrap::SetDisplacementGridData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementGridData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGridTransformWrap::SetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGridTransformWrap::SetDisplacementShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementShift(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGridTransformWrap::SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGridTransformWrap::SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToCubic();
}

void VtkGridTransformWrap::SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToLinear();
}

void VtkGridTransformWrap::SetInterpolationModeToNearestNeighbor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGridTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGridTransformWrap>(info.Holder());
	vtkGridTransform *native = (vtkGridTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToNearestNeighbor();
}
