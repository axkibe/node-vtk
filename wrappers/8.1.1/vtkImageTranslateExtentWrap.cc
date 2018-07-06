/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkImageTranslateExtentWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageTranslateExtentWrap::ptpl;

VtkImageTranslateExtentWrap::VtkImageTranslateExtentWrap()
{ }

VtkImageTranslateExtentWrap::VtkImageTranslateExtentWrap(vtkSmartPointer<vtkImageTranslateExtent> _native)
{ native = _native; }

VtkImageTranslateExtentWrap::~VtkImageTranslateExtentWrap()
{ }

void VtkImageTranslateExtentWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageTranslateExtent").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageTranslateExtent").ToLocalChecked(), ConstructorGetter);
}

void VtkImageTranslateExtentWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageTranslateExtentWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageTranslateExtentWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetTranslation", GetTranslation);
	Nan::SetPrototypeMethod(tpl, "getTranslation", GetTranslation);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTranslation", SetTranslation);
	Nan::SetPrototypeMethod(tpl, "setTranslation", SetTranslation);

#ifdef VTK_NODE_PLUS_VTKIMAGETRANSLATEEXTENTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGETRANSLATEEXTENTWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageTranslateExtentWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageTranslateExtent> native = vtkSmartPointer<vtkImageTranslateExtent>::New();
		VtkImageTranslateExtentWrap* obj = new VtkImageTranslateExtentWrap(native);
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

void VtkImageTranslateExtentWrap::GetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageTranslateExtentWrap *wrapper = ObjectWrap::Unwrap<VtkImageTranslateExtentWrap>(info.Holder());
	vtkImageTranslateExtent *native = (vtkImageTranslateExtent *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslation();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkImageTranslateExtentWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageTranslateExtentWrap *wrapper = ObjectWrap::Unwrap<VtkImageTranslateExtentWrap>(info.Holder());
	vtkImageTranslateExtent *native = (vtkImageTranslateExtent *)wrapper->native.GetPointer();
	vtkImageTranslateExtent * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageTranslateExtentWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageTranslateExtentWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageTranslateExtentWrap *w = new VtkImageTranslateExtentWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageTranslateExtentWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageTranslateExtentWrap *wrapper = ObjectWrap::Unwrap<VtkImageTranslateExtentWrap>(info.Holder());
	vtkImageTranslateExtent *native = (vtkImageTranslateExtent *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageTranslateExtent * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageTranslateExtentWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageTranslateExtentWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageTranslateExtentWrap *w = new VtkImageTranslateExtentWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageTranslateExtentWrap::SetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageTranslateExtentWrap *wrapper = ObjectWrap::Unwrap<VtkImageTranslateExtentWrap>(info.Holder());
	vtkImageTranslateExtent *native = (vtkImageTranslateExtent *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetTranslation(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslation(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetTranslation(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

