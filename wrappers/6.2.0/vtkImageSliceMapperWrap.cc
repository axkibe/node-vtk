/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageMapper3DWrap.h"
#include "vtkImageSliceMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageSliceWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageSliceMapperWrap::ptpl;

VtkImageSliceMapperWrap::VtkImageSliceMapperWrap()
{ }

VtkImageSliceMapperWrap::VtkImageSliceMapperWrap(vtkSmartPointer<vtkImageSliceMapper> _native)
{ native = _native; }

VtkImageSliceMapperWrap::~VtkImageSliceMapperWrap()
{ }

void VtkImageSliceMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageSliceMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageSliceMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkImageSliceMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageSliceMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageMapper3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageMapper3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageSliceMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CroppingOff", CroppingOff);
	Nan::SetPrototypeMethod(tpl, "croppingOff", CroppingOff);

	Nan::SetPrototypeMethod(tpl, "CroppingOn", CroppingOn);
	Nan::SetPrototypeMethod(tpl, "croppingOn", CroppingOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCropping", GetCropping);
	Nan::SetPrototypeMethod(tpl, "getCropping", GetCropping);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetOrientationMaxValue", GetOrientationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOrientationMaxValue", GetOrientationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOrientationMinValue", GetOrientationMinValue);
	Nan::SetPrototypeMethod(tpl, "getOrientationMinValue", GetOrientationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSliceNumber", GetSliceNumber);
	Nan::SetPrototypeMethod(tpl, "getSliceNumber", GetSliceNumber);

	Nan::SetPrototypeMethod(tpl, "GetSliceNumberMaxValue", GetSliceNumberMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSliceNumberMaxValue", GetSliceNumberMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSliceNumberMinValue", GetSliceNumberMinValue);
	Nan::SetPrototypeMethod(tpl, "getSliceNumberMinValue", GetSliceNumberMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCropping", SetCropping);
	Nan::SetPrototypeMethod(tpl, "setCropping", SetCropping);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegion", SetCroppingRegion);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegion", SetCroppingRegion);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetOrientationToX", SetOrientationToX);
	Nan::SetPrototypeMethod(tpl, "setOrientationToX", SetOrientationToX);

	Nan::SetPrototypeMethod(tpl, "SetOrientationToY", SetOrientationToY);
	Nan::SetPrototypeMethod(tpl, "setOrientationToY", SetOrientationToY);

	Nan::SetPrototypeMethod(tpl, "SetOrientationToZ", SetOrientationToZ);
	Nan::SetPrototypeMethod(tpl, "setOrientationToZ", SetOrientationToZ);

	Nan::SetPrototypeMethod(tpl, "SetSliceNumber", SetSliceNumber);
	Nan::SetPrototypeMethod(tpl, "setSliceNumber", SetSliceNumber);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkImageSliceMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSliceMapper> native = vtkSmartPointer<vtkImageSliceMapper>::New();
		VtkImageSliceMapperWrap* obj = new VtkImageSliceMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageSliceMapperWrap::CroppingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CroppingOff();
}

void VtkImageSliceMapperWrap::CroppingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CroppingOn();
}

void VtkImageSliceMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageSliceMapperWrap::GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCropping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceMapperWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceMapperWrap::GetOrientationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceMapperWrap::GetOrientationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceMapperWrap::GetSliceNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceNumber();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceMapperWrap::GetSliceNumberMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceNumberMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceMapperWrap::GetSliceNumberMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceNumberMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
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

void VtkImageSliceMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	vtkImageSliceMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageSliceMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSliceMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSliceMapperWrap *w = new VtkImageSliceMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSliceMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageSliceWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageSliceWrap *a1 = ObjectWrap::Unwrap<VtkImageSliceWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkImageSlice *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageSliceMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageSliceMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageSliceMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSliceMapperWrap *w = new VtkImageSliceMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceMapperWrap::SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCropping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceMapperWrap::SetCroppingRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetCroppingRegion(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
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

void VtkImageSliceMapperWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceMapperWrap::SetOrientationToX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationToX();
}

void VtkImageSliceMapperWrap::SetOrientationToY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationToY();
}

void VtkImageSliceMapperWrap::SetOrientationToZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationToZ();
}

void VtkImageSliceMapperWrap::SetSliceNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliceNumber(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceMapperWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceMapperWrap>(info.Holder());
	vtkImageSliceMapper *native = (vtkImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Update(
			info[0]->Int32Value()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}
