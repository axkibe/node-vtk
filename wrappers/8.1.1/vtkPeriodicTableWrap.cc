/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkPeriodicTableWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkLookupTableWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPeriodicTableWrap::ptpl;

VtkPeriodicTableWrap::VtkPeriodicTableWrap()
{ }

VtkPeriodicTableWrap::VtkPeriodicTableWrap(vtkSmartPointer<vtkPeriodicTable> _native)
{ native = _native; }

VtkPeriodicTableWrap::~VtkPeriodicTableWrap()
{ }

void VtkPeriodicTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPeriodicTable").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PeriodicTable").ToLocalChecked(), ConstructorGetter);
}

void VtkPeriodicTableWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPeriodicTableWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPeriodicTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAtomicNumber", GetAtomicNumber);
	Nan::SetPrototypeMethod(tpl, "getAtomicNumber", GetAtomicNumber);

	Nan::SetPrototypeMethod(tpl, "GetCovalentRadius", GetCovalentRadius);
	Nan::SetPrototypeMethod(tpl, "getCovalentRadius", GetCovalentRadius);

	Nan::SetPrototypeMethod(tpl, "GetDefaultLUT", GetDefaultLUT);
	Nan::SetPrototypeMethod(tpl, "getDefaultLUT", GetDefaultLUT);

	Nan::SetPrototypeMethod(tpl, "GetDefaultRGBTuple", GetDefaultRGBTuple);
	Nan::SetPrototypeMethod(tpl, "getDefaultRGBTuple", GetDefaultRGBTuple);

	Nan::SetPrototypeMethod(tpl, "GetElementName", GetElementName);
	Nan::SetPrototypeMethod(tpl, "getElementName", GetElementName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfElements", GetNumberOfElements);
	Nan::SetPrototypeMethod(tpl, "getNumberOfElements", GetNumberOfElements);

	Nan::SetPrototypeMethod(tpl, "GetSymbol", GetSymbol);
	Nan::SetPrototypeMethod(tpl, "getSymbol", GetSymbol);

	Nan::SetPrototypeMethod(tpl, "GetVDWRadius", GetVDWRadius);
	Nan::SetPrototypeMethod(tpl, "getVDWRadius", GetVDWRadius);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKPERIODICTABLEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPERIODICTABLEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPeriodicTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPeriodicTable> native = vtkSmartPointer<vtkPeriodicTable>::New();
		VtkPeriodicTableWrap* obj = new VtkPeriodicTableWrap(native);
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

void VtkPeriodicTableWrap::GetAtomicNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		unsigned short r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAtomicNumber(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::GetCovalentRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		float r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCovalentRadius(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::GetDefaultLUT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkLookupTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkLookupTableWrap *a0 = ObjectWrap::Unwrap<VtkLookupTableWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDefaultLUT(
			(vtkLookupTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::GetDefaultRGBTuple(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsFloat32Array())
		{
			v8::Local<v8::Float32Array>a1(v8::Local<v8::Float32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetDefaultRGBTuple(
				info[0]->Uint32Value(),
				(float *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			float b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetDefaultRGBTuple(
				info[0]->Uint32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::GetElementName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetElementName(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::GetNumberOfElements(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	unsigned short r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfElements();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPeriodicTableWrap::GetSymbol(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetSymbol(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::GetVDWRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		float r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVDWRadius(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPeriodicTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	vtkPeriodicTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPeriodicTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPeriodicTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPeriodicTableWrap *w = new VtkPeriodicTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPeriodicTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPeriodicTableWrap *wrapper = ObjectWrap::Unwrap<VtkPeriodicTableWrap>(info.Holder());
	vtkPeriodicTable *native = (vtkPeriodicTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPeriodicTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPeriodicTableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPeriodicTableWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPeriodicTableWrap *w = new VtkPeriodicTableWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
