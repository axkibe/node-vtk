/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointPlacerWrap.h"
#include "vtkFocalPlanePointPlacerWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFocalPlanePointPlacerWrap::ptpl;

VtkFocalPlanePointPlacerWrap::VtkFocalPlanePointPlacerWrap()
{ }

VtkFocalPlanePointPlacerWrap::VtkFocalPlanePointPlacerWrap(vtkSmartPointer<vtkFocalPlanePointPlacer> _native)
{ native = _native; }

VtkFocalPlanePointPlacerWrap::~VtkFocalPlanePointPlacerWrap()
{ }

void VtkFocalPlanePointPlacerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFocalPlanePointPlacer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FocalPlanePointPlacer").ToLocalChecked(), ConstructorGetter);
}

void VtkFocalPlanePointPlacerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFocalPlanePointPlacerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointPlacerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointPlacerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFocalPlanePointPlacerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOffset", GetOffset);
	Nan::SetPrototypeMethod(tpl, "getOffset", GetOffset);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetPointBounds", SetPointBounds);
	Nan::SetPrototypeMethod(tpl, "setPointBounds", SetPointBounds);

	ptpl.Reset( tpl );
}

void VtkFocalPlanePointPlacerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFocalPlanePointPlacer> native = vtkSmartPointer<vtkFocalPlanePointPlacer>::New();
		VtkFocalPlanePointPlacerWrap* obj = new VtkFocalPlanePointPlacerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFocalPlanePointPlacerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFocalPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkFocalPlanePointPlacerWrap>(info.Holder());
	vtkFocalPlanePointPlacer *native = (vtkFocalPlanePointPlacer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFocalPlanePointPlacerWrap::GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFocalPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkFocalPlanePointPlacerWrap>(info.Holder());
	vtkFocalPlanePointPlacer *native = (vtkFocalPlanePointPlacer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFocalPlanePointPlacerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFocalPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkFocalPlanePointPlacerWrap>(info.Holder());
	vtkFocalPlanePointPlacer *native = (vtkFocalPlanePointPlacer *)wrapper->native.GetPointer();
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

void VtkFocalPlanePointPlacerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFocalPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkFocalPlanePointPlacerWrap>(info.Holder());
	vtkFocalPlanePointPlacer *native = (vtkFocalPlanePointPlacer *)wrapper->native.GetPointer();
	vtkFocalPlanePointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkFocalPlanePointPlacerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFocalPlanePointPlacerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFocalPlanePointPlacerWrap *w = new VtkFocalPlanePointPlacerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFocalPlanePointPlacerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFocalPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkFocalPlanePointPlacerWrap>(info.Holder());
	vtkFocalPlanePointPlacer *native = (vtkFocalPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFocalPlanePointPlacer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkFocalPlanePointPlacerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFocalPlanePointPlacerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFocalPlanePointPlacerWrap *w = new VtkFocalPlanePointPlacerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFocalPlanePointPlacerWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFocalPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkFocalPlanePointPlacerWrap>(info.Holder());
	vtkFocalPlanePointPlacer *native = (vtkFocalPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFocalPlanePointPlacerWrap::SetPointBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFocalPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkFocalPlanePointPlacerWrap>(info.Holder());
	vtkFocalPlanePointPlacer *native = (vtkFocalPlanePointPlacer *)wrapper->native.GetPointer();
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
							native->SetPointBounds(
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

