/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDepthSortPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCameraWrap.h"
#include "vtkProp3DWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDepthSortPolyDataWrap::ptpl;

VtkDepthSortPolyDataWrap::VtkDepthSortPolyDataWrap()
{ }

VtkDepthSortPolyDataWrap::VtkDepthSortPolyDataWrap(vtkSmartPointer<vtkDepthSortPolyData> _native)
{ native = _native; }

VtkDepthSortPolyDataWrap::~VtkDepthSortPolyDataWrap()
{ }

void VtkDepthSortPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDepthSortPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DepthSortPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkDepthSortPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDepthSortPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDepthSortPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCamera", GetCamera);
	Nan::SetPrototypeMethod(tpl, "getCamera", GetCamera);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepthSortMode", GetDepthSortMode);
	Nan::SetPrototypeMethod(tpl, "getDepthSortMode", GetDepthSortMode);

	Nan::SetPrototypeMethod(tpl, "GetDirection", GetDirection);
	Nan::SetPrototypeMethod(tpl, "getDirection", GetDirection);

	Nan::SetPrototypeMethod(tpl, "GetProp3D", GetProp3D);
	Nan::SetPrototypeMethod(tpl, "getProp3D", GetProp3D);

	Nan::SetPrototypeMethod(tpl, "GetSortScalars", GetSortScalars);
	Nan::SetPrototypeMethod(tpl, "getSortScalars", GetSortScalars);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCamera", SetCamera);
	Nan::SetPrototypeMethod(tpl, "setCamera", SetCamera);

	Nan::SetPrototypeMethod(tpl, "SetDepthSortMode", SetDepthSortMode);
	Nan::SetPrototypeMethod(tpl, "setDepthSortMode", SetDepthSortMode);

	Nan::SetPrototypeMethod(tpl, "SetDepthSortModeToBoundsCenter", SetDepthSortModeToBoundsCenter);
	Nan::SetPrototypeMethod(tpl, "setDepthSortModeToBoundsCenter", SetDepthSortModeToBoundsCenter);

	Nan::SetPrototypeMethod(tpl, "SetDepthSortModeToFirstPoint", SetDepthSortModeToFirstPoint);
	Nan::SetPrototypeMethod(tpl, "setDepthSortModeToFirstPoint", SetDepthSortModeToFirstPoint);

	Nan::SetPrototypeMethod(tpl, "SetDepthSortModeToParametricCenter", SetDepthSortModeToParametricCenter);
	Nan::SetPrototypeMethod(tpl, "setDepthSortModeToParametricCenter", SetDepthSortModeToParametricCenter);

	Nan::SetPrototypeMethod(tpl, "SetDirection", SetDirection);
	Nan::SetPrototypeMethod(tpl, "setDirection", SetDirection);

	Nan::SetPrototypeMethod(tpl, "SetDirectionToBackToFront", SetDirectionToBackToFront);
	Nan::SetPrototypeMethod(tpl, "setDirectionToBackToFront", SetDirectionToBackToFront);

	Nan::SetPrototypeMethod(tpl, "SetDirectionToFrontToBack", SetDirectionToFrontToBack);
	Nan::SetPrototypeMethod(tpl, "setDirectionToFrontToBack", SetDirectionToFrontToBack);

	Nan::SetPrototypeMethod(tpl, "SetDirectionToSpecifiedVector", SetDirectionToSpecifiedVector);
	Nan::SetPrototypeMethod(tpl, "setDirectionToSpecifiedVector", SetDirectionToSpecifiedVector);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetProp3D", SetProp3D);
	Nan::SetPrototypeMethod(tpl, "setProp3D", SetProp3D);

	Nan::SetPrototypeMethod(tpl, "SetSortScalars", SetSortScalars);
	Nan::SetPrototypeMethod(tpl, "setSortScalars", SetSortScalars);

	Nan::SetPrototypeMethod(tpl, "SetVector", SetVector);
	Nan::SetPrototypeMethod(tpl, "setVector", SetVector);

	Nan::SetPrototypeMethod(tpl, "SortScalarsOff", SortScalarsOff);
	Nan::SetPrototypeMethod(tpl, "sortScalarsOff", SortScalarsOff);

	Nan::SetPrototypeMethod(tpl, "SortScalarsOn", SortScalarsOn);
	Nan::SetPrototypeMethod(tpl, "sortScalarsOn", SortScalarsOn);

	ptpl.Reset( tpl );
}

void VtkDepthSortPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDepthSortPolyData> native = vtkSmartPointer<vtkDepthSortPolyData>::New();
		VtkDepthSortPolyDataWrap* obj = new VtkDepthSortPolyDataWrap(native);
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

void VtkDepthSortPolyDataWrap::GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	vtkCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCamera();
		VtkCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCameraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraWrap *w = new VtkCameraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthSortPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDepthSortPolyDataWrap::GetDepthSortMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthSortMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthSortPolyDataWrap::GetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthSortPolyDataWrap::GetProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	vtkProp3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProp3D();
		VtkProp3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DWrap *w = new VtkProp3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthSortPolyDataWrap::GetSortScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSortScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthSortPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
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

void VtkDepthSortPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	vtkDepthSortPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDepthSortPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDepthSortPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDepthSortPolyDataWrap *w = new VtkDepthSortPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthSortPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDepthSortPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDepthSortPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDepthSortPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDepthSortPolyDataWrap *w = new VtkDepthSortPolyDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCameraWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCameraWrap *a0 = ObjectWrap::Unwrap<VtkCameraWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCamera(
			(vtkCamera *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SetDepthSortMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthSortMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SetDepthSortModeToBoundsCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDepthSortModeToBoundsCenter();
}

void VtkDepthSortPolyDataWrap::SetDepthSortModeToFirstPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDepthSortModeToFirstPoint();
}

void VtkDepthSortPolyDataWrap::SetDepthSortModeToParametricCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDepthSortModeToParametricCenter();
}

void VtkDepthSortPolyDataWrap::SetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirection(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SetDirectionToBackToFront(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDirectionToBackToFront();
}

void VtkDepthSortPolyDataWrap::SetDirectionToFrontToBack(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDirectionToFrontToBack();
}

void VtkDepthSortPolyDataWrap::SetDirectionToSpecifiedVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDirectionToSpecifiedVector();
}

void VtkDepthSortPolyDataWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrigin(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
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
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrigin(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SetProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProp3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProp3DWrap *a0 = ObjectWrap::Unwrap<VtkProp3DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProp3D(
			(vtkProp3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SetSortScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSortScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SetVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVector(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
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
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVector(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetVector(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthSortPolyDataWrap::SortScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SortScalarsOff();
}

void VtkDepthSortPolyDataWrap::SortScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthSortPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkDepthSortPolyDataWrap>(info.Holder());
	vtkDepthSortPolyData *native = (vtkDepthSortPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SortScalarsOn();
}
