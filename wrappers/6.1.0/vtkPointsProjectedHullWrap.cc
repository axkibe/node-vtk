/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointsWrap.h"
#include "vtkPointsProjectedHullWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointsProjectedHullWrap::ptpl;

VtkPointsProjectedHullWrap::VtkPointsProjectedHullWrap()
{ }

VtkPointsProjectedHullWrap::VtkPointsProjectedHullWrap(vtkSmartPointer<vtkPointsProjectedHull> _native)
{ native = _native; }

VtkPointsProjectedHullWrap::~VtkPointsProjectedHullWrap()
{ }

void VtkPointsProjectedHullWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointsProjectedHull").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointsProjectedHull").ToLocalChecked(), ConstructorGetter);
}

void VtkPointsProjectedHullWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointsProjectedHullWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointsProjectedHullWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetSizeCCWHullX", GetSizeCCWHullX);
	Nan::SetPrototypeMethod(tpl, "getSizeCCWHullX", GetSizeCCWHullX);

	Nan::SetPrototypeMethod(tpl, "GetSizeCCWHullY", GetSizeCCWHullY);
	Nan::SetPrototypeMethod(tpl, "getSizeCCWHullY", GetSizeCCWHullY);

	Nan::SetPrototypeMethod(tpl, "GetSizeCCWHullZ", GetSizeCCWHullZ);
	Nan::SetPrototypeMethod(tpl, "getSizeCCWHullZ", GetSizeCCWHullZ);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "RectangleIntersectionX", RectangleIntersectionX);
	Nan::SetPrototypeMethod(tpl, "rectangleIntersectionX", RectangleIntersectionX);

	Nan::SetPrototypeMethod(tpl, "RectangleIntersectionY", RectangleIntersectionY);
	Nan::SetPrototypeMethod(tpl, "rectangleIntersectionY", RectangleIntersectionY);

	Nan::SetPrototypeMethod(tpl, "RectangleIntersectionZ", RectangleIntersectionZ);
	Nan::SetPrototypeMethod(tpl, "rectangleIntersectionZ", RectangleIntersectionZ);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkPointsProjectedHullWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointsProjectedHull> native = vtkSmartPointer<vtkPointsProjectedHull>::New();
		VtkPointsProjectedHullWrap* obj = new VtkPointsProjectedHullWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPointsProjectedHullWrap::GetSizeCCWHullX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSizeCCWHullX();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointsProjectedHullWrap::GetSizeCCWHullY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSizeCCWHullY();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointsProjectedHullWrap::GetSizeCCWHullZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSizeCCWHullZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointsProjectedHullWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkPointsProjectedHullWrap::RectangleIntersectionX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RectangleIntersectionX(
			(vtkPoints *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->RectangleIntersectionX(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsProjectedHullWrap::RectangleIntersectionY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RectangleIntersectionY(
			(vtkPoints *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->RectangleIntersectionY(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsProjectedHullWrap::RectangleIntersectionZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RectangleIntersectionZ(
			(vtkPoints *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->RectangleIntersectionZ(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsProjectedHullWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkPointsProjectedHullWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsProjectedHullWrap *wrapper = ObjectWrap::Unwrap<VtkPointsProjectedHullWrap>(info.Holder());
	vtkPointsProjectedHull *native = (vtkPointsProjectedHull *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}
