/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractMapperWrap.h"
#include "vtkAbstractMapper3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractMapper3DWrap::ptpl;

VtkAbstractMapper3DWrap::VtkAbstractMapper3DWrap()
{ }

VtkAbstractMapper3DWrap::VtkAbstractMapper3DWrap(vtkSmartPointer<vtkAbstractMapper3D> _native)
{ native = _native; }

VtkAbstractMapper3DWrap::~VtkAbstractMapper3DWrap()
{ }

void VtkAbstractMapper3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractMapper3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractMapper3D").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractMapper3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractMapper3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractMapper3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClippingPlaneInDataCoords", GetClippingPlaneInDataCoords);
	Nan::SetPrototypeMethod(tpl, "getClippingPlaneInDataCoords", GetClippingPlaneInDataCoords);

	Nan::SetPrototypeMethod(tpl, "GetLength", GetLength);
	Nan::SetPrototypeMethod(tpl, "getLength", GetLength);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfClippingPlanes", GetNumberOfClippingPlanes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfClippingPlanes", GetNumberOfClippingPlanes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsARayCastMapper", IsARayCastMapper);
	Nan::SetPrototypeMethod(tpl, "isARayCastMapper", IsARayCastMapper);

	Nan::SetPrototypeMethod(tpl, "IsARenderIntoImageMapper", IsARenderIntoImageMapper);
	Nan::SetPrototypeMethod(tpl, "isARenderIntoImageMapper", IsARenderIntoImageMapper);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkAbstractMapper3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkAbstractMapper3DWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractMapper3DWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
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
		native->GetCenter(
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
		native->GetCenter(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractMapper3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractMapper3DWrap::GetClippingPlaneInDataCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 4 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetClippingPlaneInDataCoords(
					(vtkMatrix4x4 *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				double b2[4];
				if( a2->Length() < 4 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 4; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetClippingPlaneInDataCoords(
					(vtkMatrix4x4 *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					b2
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractMapper3DWrap::GetLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractMapper3DWrap::GetNumberOfClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfClippingPlanes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractMapper3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
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

void VtkAbstractMapper3DWrap::IsARayCastMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsARayCastMapper();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractMapper3DWrap::IsARenderIntoImageMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsARenderIntoImageMapper();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractMapper3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	vtkAbstractMapper3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkAbstractMapper3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractMapper3DWrap>(info.Holder());
	vtkAbstractMapper3D *native = (vtkAbstractMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractMapper3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
