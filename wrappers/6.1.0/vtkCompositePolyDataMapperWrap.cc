/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapperWrap.h"
#include "vtkCompositePolyDataMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkActorWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositePolyDataMapperWrap::ptpl;

VtkCompositePolyDataMapperWrap::VtkCompositePolyDataMapperWrap()
{ }

VtkCompositePolyDataMapperWrap::VtkCompositePolyDataMapperWrap(vtkSmartPointer<vtkCompositePolyDataMapper> _native)
{ native = _native; }

VtkCompositePolyDataMapperWrap::~VtkCompositePolyDataMapperWrap()
{ }

void VtkCompositePolyDataMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositePolyDataMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositePolyDataMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositePolyDataMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositePolyDataMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositePolyDataMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

	ptpl.Reset( tpl );
}

void VtkCompositePolyDataMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositePolyDataMapper> native = vtkSmartPointer<vtkCompositePolyDataMapper>::New();
		VtkCompositePolyDataMapperWrap* obj = new VtkCompositePolyDataMapperWrap(native);
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

void VtkCompositePolyDataMapperWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapperWrap>(info.Holder());
	vtkCompositePolyDataMapper *native = (vtkCompositePolyDataMapper *)wrapper->native.GetPointer();
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
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkCompositePolyDataMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapperWrap>(info.Holder());
	vtkCompositePolyDataMapper *native = (vtkCompositePolyDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositePolyDataMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapperWrap>(info.Holder());
	vtkCompositePolyDataMapper *native = (vtkCompositePolyDataMapper *)wrapper->native.GetPointer();
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

void VtkCompositePolyDataMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapperWrap>(info.Holder());
	vtkCompositePolyDataMapper *native = (vtkCompositePolyDataMapper *)wrapper->native.GetPointer();
	vtkCompositePolyDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCompositePolyDataMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositePolyDataMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositePolyDataMapperWrap *w = new VtkCompositePolyDataMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositePolyDataMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapperWrap>(info.Holder());
	vtkCompositePolyDataMapper *native = (vtkCompositePolyDataMapper *)wrapper->native.GetPointer();
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

void VtkCompositePolyDataMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapperWrap>(info.Holder());
	vtkCompositePolyDataMapper *native = (vtkCompositePolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActorWrap *a1 = ObjectWrap::Unwrap<VtkActorWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkActor *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositePolyDataMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapperWrap>(info.Holder());
	vtkCompositePolyDataMapper *native = (vtkCompositePolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositePolyDataMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCompositePolyDataMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositePolyDataMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositePolyDataMapperWrap *w = new VtkCompositePolyDataMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

