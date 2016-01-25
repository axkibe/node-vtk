/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageIslandRemoval2DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageIslandRemoval2DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageIslandRemoval2DWrap::ptpl;

VtkImageIslandRemoval2DWrap::VtkImageIslandRemoval2DWrap()
{ }

VtkImageIslandRemoval2DWrap::VtkImageIslandRemoval2DWrap(vtkSmartPointer<vtkImageIslandRemoval2D> _native)
{ native = _native; }

VtkImageIslandRemoval2DWrap::~VtkImageIslandRemoval2DWrap()
{ }

void VtkImageIslandRemoval2DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageIslandRemoval2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageIslandRemoval2D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageIslandRemoval2D").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageIslandRemoval2DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetAreaThreshold", GetAreaThreshold);
	Nan::SetPrototypeMethod(tpl, "getAreaThreshold", GetAreaThreshold);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIslandValue", GetIslandValue);
	Nan::SetPrototypeMethod(tpl, "getIslandValue", GetIslandValue);

	Nan::SetPrototypeMethod(tpl, "GetReplaceValue", GetReplaceValue);
	Nan::SetPrototypeMethod(tpl, "getReplaceValue", GetReplaceValue);

	Nan::SetPrototypeMethod(tpl, "GetSquareNeighborhood", GetSquareNeighborhood);
	Nan::SetPrototypeMethod(tpl, "getSquareNeighborhood", GetSquareNeighborhood);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAreaThreshold", SetAreaThreshold);
	Nan::SetPrototypeMethod(tpl, "setAreaThreshold", SetAreaThreshold);

	Nan::SetPrototypeMethod(tpl, "SetIslandValue", SetIslandValue);
	Nan::SetPrototypeMethod(tpl, "setIslandValue", SetIslandValue);

	Nan::SetPrototypeMethod(tpl, "SetReplaceValue", SetReplaceValue);
	Nan::SetPrototypeMethod(tpl, "setReplaceValue", SetReplaceValue);

	Nan::SetPrototypeMethod(tpl, "SetSquareNeighborhood", SetSquareNeighborhood);
	Nan::SetPrototypeMethod(tpl, "setSquareNeighborhood", SetSquareNeighborhood);

	Nan::SetPrototypeMethod(tpl, "SquareNeighborhoodOff", SquareNeighborhoodOff);
	Nan::SetPrototypeMethod(tpl, "squareNeighborhoodOff", SquareNeighborhoodOff);

	Nan::SetPrototypeMethod(tpl, "SquareNeighborhoodOn", SquareNeighborhoodOn);
	Nan::SetPrototypeMethod(tpl, "squareNeighborhoodOn", SquareNeighborhoodOn);

}

void VtkImageIslandRemoval2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageIslandRemoval2D> native = vtkSmartPointer<vtkImageIslandRemoval2D>::New();
		VtkImageIslandRemoval2DWrap* obj = new VtkImageIslandRemoval2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageIslandRemoval2DWrap::GetAreaThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAreaThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageIslandRemoval2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageIslandRemoval2DWrap::GetIslandValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIslandValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageIslandRemoval2DWrap::GetReplaceValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplaceValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageIslandRemoval2DWrap::GetSquareNeighborhood(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSquareNeighborhood();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageIslandRemoval2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
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

void VtkImageIslandRemoval2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	vtkImageIslandRemoval2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageIslandRemoval2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageIslandRemoval2DWrap *w = new VtkImageIslandRemoval2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageIslandRemoval2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageIslandRemoval2D * r;
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
			Nan::New<v8::Function>(VtkImageIslandRemoval2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageIslandRemoval2DWrap *w = new VtkImageIslandRemoval2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageIslandRemoval2DWrap::SetAreaThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAreaThreshold(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageIslandRemoval2DWrap::SetIslandValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIslandValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageIslandRemoval2DWrap::SetReplaceValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplaceValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageIslandRemoval2DWrap::SetSquareNeighborhood(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSquareNeighborhood(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageIslandRemoval2DWrap::SquareNeighborhoodOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SquareNeighborhoodOff();
}

void VtkImageIslandRemoval2DWrap::SquareNeighborhoodOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIslandRemoval2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageIslandRemoval2DWrap>(info.Holder());
	vtkImageIslandRemoval2D *native = (vtkImageIslandRemoval2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SquareNeighborhoodOn();
}

