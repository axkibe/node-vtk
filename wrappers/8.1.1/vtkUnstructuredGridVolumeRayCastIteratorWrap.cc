/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkUnstructuredGridVolumeRayCastIteratorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridVolumeRayCastIteratorWrap::ptpl;

VtkUnstructuredGridVolumeRayCastIteratorWrap::VtkUnstructuredGridVolumeRayCastIteratorWrap()
{ }

VtkUnstructuredGridVolumeRayCastIteratorWrap::VtkUnstructuredGridVolumeRayCastIteratorWrap(vtkSmartPointer<vtkUnstructuredGridVolumeRayCastIterator> _native)
{ native = _native; }

VtkUnstructuredGridVolumeRayCastIteratorWrap::~VtkUnstructuredGridVolumeRayCastIteratorWrap()
{ }

void VtkUnstructuredGridVolumeRayCastIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUnstructuredGridVolumeRayCastIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UnstructuredGridVolumeRayCastIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUnstructuredGridVolumeRayCastIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

#ifdef VTK_NODE_PLUS_VTKUNSTRUCTUREDGRIDVOLUMERAYCASTITERATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKUNSTRUCTUREDGRIDVOLUMERAYCASTITERATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkUnstructuredGridVolumeRayCastIteratorWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	vtkUnstructuredGridVolumeRayCastIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkUnstructuredGridVolumeRayCastIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridVolumeRayCastIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridVolumeRayCastIteratorWrap *w = new VtkUnstructuredGridVolumeRayCastIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkUnstructuredGridVolumeRayCastIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkUnstructuredGridVolumeRayCastIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridVolumeRayCastIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridVolumeRayCastIteratorWrap *w = new VtkUnstructuredGridVolumeRayCastIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetBounds(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBounds(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

