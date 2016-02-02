/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLWriterWrap.h"
#include "vtkXMLStructuredDataWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkExtentTranslatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLStructuredDataWriterWrap::ptpl;

VtkXMLStructuredDataWriterWrap::VtkXMLStructuredDataWriterWrap()
{ }

VtkXMLStructuredDataWriterWrap::VtkXMLStructuredDataWriterWrap(vtkSmartPointer<vtkXMLStructuredDataWriter> _native)
{ native = _native; }

VtkXMLStructuredDataWriterWrap::~VtkXMLStructuredDataWriterWrap()
{ }

void VtkXMLStructuredDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLStructuredDataWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLStructuredDataWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLStructuredDataWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLStructuredDataWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLStructuredDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtentTranslator", GetExtentTranslator);
	Nan::SetPrototypeMethod(tpl, "getExtentTranslator", GetExtentTranslator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPieces", GetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPieces", GetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtentTranslator", SetExtentTranslator);
	Nan::SetPrototypeMethod(tpl, "setExtentTranslator", SetExtentTranslator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPieces", SetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPieces", SetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "SetWriteExtent", SetWriteExtent);
	Nan::SetPrototypeMethod(tpl, "setWriteExtent", SetWriteExtent);

	ptpl.Reset( tpl );
}

void VtkXMLStructuredDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkXMLStructuredDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLStructuredDataWriterWrap::GetExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	vtkExtentTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtentTranslator();
		VtkExtentTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtentTranslatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtentTranslatorWrap *w = new VtkExtentTranslatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLStructuredDataWriterWrap::GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLStructuredDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLStructuredDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	vtkXMLStructuredDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXMLStructuredDataWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLStructuredDataWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLStructuredDataWriterWrap *w = new VtkXMLStructuredDataWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLStructuredDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLStructuredDataWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXMLStructuredDataWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLStructuredDataWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLStructuredDataWriterWrap *w = new VtkXMLStructuredDataWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLStructuredDataWriterWrap::SetExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkExtentTranslatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkExtentTranslatorWrap *a0 = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtentTranslator(
			(vtkExtentTranslator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLStructuredDataWriterWrap::SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPieces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLStructuredDataWriterWrap::SetWriteExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLStructuredDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLStructuredDataWriterWrap>(info.Holder());
	vtkXMLStructuredDataWriter *native = (vtkXMLStructuredDataWriter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetWriteExtent(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->SetWriteExtent(
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
							native->SetWriteExtent(
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

