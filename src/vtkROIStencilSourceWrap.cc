/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageStencilSourceWrap.h"
#include "vtkROIStencilSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkROIStencilSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkROIStencilSourceWrap::ptpl;

VtkROIStencilSourceWrap::VtkROIStencilSourceWrap()
{ }

VtkROIStencilSourceWrap::VtkROIStencilSourceWrap(vtkSmartPointer<vtkROIStencilSource> _native)
{ native = _native; }

VtkROIStencilSourceWrap::~VtkROIStencilSourceWrap()
{ }

void VtkROIStencilSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkROIStencilSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ROIStencilSource").ToLocalChecked(), ConstructorGetter);
}

void VtkROIStencilSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkROIStencilSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageStencilSourceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageStencilSourceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkROIStencilSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetShape", GetShape);
	Nan::SetPrototypeMethod(tpl, "getShape", GetShape);

	Nan::SetPrototypeMethod(tpl, "GetShapeAsString", GetShapeAsString);
	Nan::SetPrototypeMethod(tpl, "getShapeAsString", GetShapeAsString);

	Nan::SetPrototypeMethod(tpl, "GetShapeMaxValue", GetShapeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShapeMaxValue", GetShapeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShapeMinValue", GetShapeMinValue);
	Nan::SetPrototypeMethod(tpl, "getShapeMinValue", GetShapeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetShape", SetShape);
	Nan::SetPrototypeMethod(tpl, "setShape", SetShape);

	Nan::SetPrototypeMethod(tpl, "SetShapeToBox", SetShapeToBox);
	Nan::SetPrototypeMethod(tpl, "setShapeToBox", SetShapeToBox);

	Nan::SetPrototypeMethod(tpl, "SetShapeToCylinderX", SetShapeToCylinderX);
	Nan::SetPrototypeMethod(tpl, "setShapeToCylinderX", SetShapeToCylinderX);

	Nan::SetPrototypeMethod(tpl, "SetShapeToCylinderY", SetShapeToCylinderY);
	Nan::SetPrototypeMethod(tpl, "setShapeToCylinderY", SetShapeToCylinderY);

	Nan::SetPrototypeMethod(tpl, "SetShapeToCylinderZ", SetShapeToCylinderZ);
	Nan::SetPrototypeMethod(tpl, "setShapeToCylinderZ", SetShapeToCylinderZ);

	Nan::SetPrototypeMethod(tpl, "SetShapeToEllipsoid", SetShapeToEllipsoid);
	Nan::SetPrototypeMethod(tpl, "setShapeToEllipsoid", SetShapeToEllipsoid);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkROIStencilSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkROIStencilSource> native = vtkSmartPointer<vtkROIStencilSource>::New();
		VtkROIStencilSourceWrap* obj = new VtkROIStencilSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkROIStencilSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkROIStencilSourceWrap::GetShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShape();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkROIStencilSourceWrap::GetShapeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShapeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkROIStencilSourceWrap::GetShapeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShapeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkROIStencilSourceWrap::GetShapeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShapeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkROIStencilSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
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

void VtkROIStencilSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	vtkROIStencilSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkROIStencilSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkROIStencilSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkROIStencilSourceWrap *w = new VtkROIStencilSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkROIStencilSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkROIStencilSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkROIStencilSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkROIStencilSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkROIStencilSourceWrap *w = new VtkROIStencilSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkROIStencilSourceWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkROIStencilSourceWrap::SetShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShape(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkROIStencilSourceWrap::SetShapeToBox(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShapeToBox();
}

void VtkROIStencilSourceWrap::SetShapeToCylinderX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShapeToCylinderX();
}

void VtkROIStencilSourceWrap::SetShapeToCylinderY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShapeToCylinderY();
}

void VtkROIStencilSourceWrap::SetShapeToCylinderZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShapeToCylinderZ();
}

void VtkROIStencilSourceWrap::SetShapeToEllipsoid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkROIStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkROIStencilSourceWrap>(info.Holder());
	vtkROIStencilSource *native = (vtkROIStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShapeToEllipsoid();
}

