/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractPolygonalHandleRepresentation3DWrap.h"
#include "vtkPolygonalHandleRepresentation3DWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolygonalHandleRepresentation3DWrap::ptpl;

VtkPolygonalHandleRepresentation3DWrap::VtkPolygonalHandleRepresentation3DWrap()
{ }

VtkPolygonalHandleRepresentation3DWrap::VtkPolygonalHandleRepresentation3DWrap(vtkSmartPointer<vtkPolygonalHandleRepresentation3D> _native)
{ native = _native; }

VtkPolygonalHandleRepresentation3DWrap::~VtkPolygonalHandleRepresentation3DWrap()
{ }

void VtkPolygonalHandleRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolygonalHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolygonalHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
}

void VtkPolygonalHandleRepresentation3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolygonalHandleRepresentation3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractPolygonalHandleRepresentation3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractPolygonalHandleRepresentation3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolygonalHandleRepresentation3DWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "SetWorldPosition", SetWorldPosition);
	Nan::SetPrototypeMethod(tpl, "setWorldPosition", SetWorldPosition);

#ifdef VTK_NODE_PLUS_VTKPOLYGONALHANDLEREPRESENTATION3DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOLYGONALHANDLEREPRESENTATION3DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPolygonalHandleRepresentation3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolygonalHandleRepresentation3D> native = vtkSmartPointer<vtkPolygonalHandleRepresentation3D>::New();
		VtkPolygonalHandleRepresentation3DWrap* obj = new VtkPolygonalHandleRepresentation3DWrap(native);
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

void VtkPolygonalHandleRepresentation3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolygonalHandleRepresentation3DWrap::GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffset();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkPolygonalHandleRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkPolygonalHandleRepresentation3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkPolygonalHandleRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPolygonalHandleRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolygonalHandleRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolygonalHandleRepresentation3DWrap *w = new VtkPolygonalHandleRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolygonalHandleRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolygonalHandleRepresentation3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPolygonalHandleRepresentation3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolygonalHandleRepresentation3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolygonalHandleRepresentation3DWrap *w = new VtkPolygonalHandleRepresentation3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolygonalHandleRepresentation3DWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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
		native->SetOffset(
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
		native->SetOffset(
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
				native->SetOffset(
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

void VtkPolygonalHandleRepresentation3DWrap::SetWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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
		native->SetWorldPosition(
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
		native->SetWorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

