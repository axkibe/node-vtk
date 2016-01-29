/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAlgorithmWrap.h"
#include "vtkTrivialProducerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTrivialProducerWrap::ptpl;

VtkTrivialProducerWrap::VtkTrivialProducerWrap()
{ }

VtkTrivialProducerWrap::VtkTrivialProducerWrap(vtkSmartPointer<vtkTrivialProducer> _native)
{ native = _native; }

VtkTrivialProducerWrap::~VtkTrivialProducerWrap()
{ }

void VtkTrivialProducerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTrivialProducer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TrivialProducer").ToLocalChecked(), ConstructorGetter);
}

void VtkTrivialProducerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTrivialProducerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTrivialProducerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FillOutputDataInformation", FillOutputDataInformation);
	Nan::SetPrototypeMethod(tpl, "fillOutputDataInformation", FillOutputDataInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutput", SetOutput);
	Nan::SetPrototypeMethod(tpl, "setOutput", SetOutput);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

	ptpl.Reset( tpl );
}

void VtkTrivialProducerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTrivialProducer> native = vtkSmartPointer<vtkTrivialProducer>::New();
		VtkTrivialProducerWrap* obj = new VtkTrivialProducerWrap(native);
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

void VtkTrivialProducerWrap::FillOutputDataInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialProducerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialProducerWrap>(info.Holder());
	vtkTrivialProducer *native = (vtkTrivialProducer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->FillOutputDataInformation(
				(vtkDataObject *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTrivialProducerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialProducerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialProducerWrap>(info.Holder());
	vtkTrivialProducer *native = (vtkTrivialProducer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTrivialProducerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialProducerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialProducerWrap>(info.Holder());
	vtkTrivialProducer *native = (vtkTrivialProducer *)wrapper->native.GetPointer();
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

void VtkTrivialProducerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialProducerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialProducerWrap>(info.Holder());
	vtkTrivialProducer *native = (vtkTrivialProducer *)wrapper->native.GetPointer();
	vtkTrivialProducer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTrivialProducerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTrivialProducerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTrivialProducerWrap *w = new VtkTrivialProducerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTrivialProducerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialProducerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialProducerWrap>(info.Holder());
	vtkTrivialProducer *native = (vtkTrivialProducer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTrivialProducer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTrivialProducerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTrivialProducerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTrivialProducerWrap *w = new VtkTrivialProducerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTrivialProducerWrap::SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialProducerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialProducerWrap>(info.Holder());
	vtkTrivialProducer *native = (vtkTrivialProducer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutput(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTrivialProducerWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialProducerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialProducerWrap>(info.Holder());
	vtkTrivialProducer *native = (vtkTrivialProducer *)wrapper->native.GetPointer();
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
							native->SetWholeExtent(
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

