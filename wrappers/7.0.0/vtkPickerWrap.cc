/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractPropPickerWrap.h"
#include "vtkPickerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractMapper3DWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkProp3DCollectionWrap.h"
#include "vtkActorCollectionWrap.h"
#include "vtkPointsWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPickerWrap::ptpl;

VtkPickerWrap::VtkPickerWrap()
{ }

VtkPickerWrap::VtkPickerWrap(vtkSmartPointer<vtkPicker> _native)
{ native = _native; }

VtkPickerWrap::~VtkPickerWrap()
{ }

void VtkPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Picker").ToLocalChecked(), ConstructorGetter);
}

void VtkPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractPropPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractPropPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetMapper", GetMapper);
	Nan::SetPrototypeMethod(tpl, "getMapper", GetMapper);

	Nan::SetPrototypeMethod(tpl, "GetPickedPositions", GetPickedPositions);
	Nan::SetPrototypeMethod(tpl, "getPickedPositions", GetPickedPositions);

	Nan::SetPrototypeMethod(tpl, "GetProp3Ds", GetProp3Ds);
	Nan::SetPrototypeMethod(tpl, "getProp3Ds", GetProp3Ds);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	ptpl.Reset( tpl );
}

void VtkPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPicker> native = vtkSmartPointer<vtkPicker>::New();
		VtkPickerWrap* obj = new VtkPickerWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPickerWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	vtkActorCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActors();
		VtkActorCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActorCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorCollectionWrap *w = new VtkActorCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPickerWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSet();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickerWrap::GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	vtkAbstractMapper3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapper();
		VtkAbstractMapper3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractMapper3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractMapper3DWrap *w = new VtkAbstractMapper3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickerWrap::GetPickedPositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickedPositions();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickerWrap::GetProp3Ds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	vtkProp3DCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProp3Ds();
		VtkProp3DCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DCollectionWrap *w = new VtkProp3DCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickerWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
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

void VtkPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	vtkPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPickerWrap *w = new VtkPickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickerWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[1]))
		{
			VtkRendererWrap *a1 = ObjectWrap::Unwrap<VtkRendererWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Pick(
				(double *)(a0->Buffer()->GetContents().Data()),
				(vtkRenderer *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[1]))
		{
			VtkRendererWrap *a1 = ObjectWrap::Unwrap<VtkRendererWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Pick(
				b0,
				(vtkRenderer *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[3]))
				{
					VtkRendererWrap *a3 = ObjectWrap::Unwrap<VtkRendererWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Pick(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						(vtkRenderer *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPickerWrap *w = new VtkPickerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickerWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPickerWrap>(info.Holder());
	vtkPicker *native = (vtkPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
