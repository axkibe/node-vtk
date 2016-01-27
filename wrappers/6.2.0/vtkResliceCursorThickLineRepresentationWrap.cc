/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkResliceCursorLineRepresentationWrap.h"
#include "vtkResliceCursorThickLineRepresentationWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkResliceCursorThickLineRepresentationWrap::ptpl;

VtkResliceCursorThickLineRepresentationWrap::VtkResliceCursorThickLineRepresentationWrap()
{ }

VtkResliceCursorThickLineRepresentationWrap::VtkResliceCursorThickLineRepresentationWrap(vtkSmartPointer<vtkResliceCursorThickLineRepresentation> _native)
{ native = _native; }

VtkResliceCursorThickLineRepresentationWrap::~VtkResliceCursorThickLineRepresentationWrap()
{ }

void VtkResliceCursorThickLineRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkResliceCursorThickLineRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ResliceCursorThickLineRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkResliceCursorThickLineRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkResliceCursorThickLineRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkResliceCursorLineRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkResliceCursorLineRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkResliceCursorThickLineRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultResliceAlgorithm", CreateDefaultResliceAlgorithm);
	Nan::SetPrototypeMethod(tpl, "createDefaultResliceAlgorithm", CreateDefaultResliceAlgorithm);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetResliceParameters", SetResliceParameters);
	Nan::SetPrototypeMethod(tpl, "setResliceParameters", SetResliceParameters);

	ptpl.Reset( tpl );
}

void VtkResliceCursorThickLineRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkResliceCursorThickLineRepresentation> native = vtkSmartPointer<vtkResliceCursorThickLineRepresentation>::New();
		VtkResliceCursorThickLineRepresentationWrap* obj = new VtkResliceCursorThickLineRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkResliceCursorThickLineRepresentationWrap::CreateDefaultResliceAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorThickLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorThickLineRepresentationWrap>(info.Holder());
	vtkResliceCursorThickLineRepresentation *native = (vtkResliceCursorThickLineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultResliceAlgorithm();
}

void VtkResliceCursorThickLineRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorThickLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorThickLineRepresentationWrap>(info.Holder());
	vtkResliceCursorThickLineRepresentation *native = (vtkResliceCursorThickLineRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkResliceCursorThickLineRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorThickLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorThickLineRepresentationWrap>(info.Holder());
	vtkResliceCursorThickLineRepresentation *native = (vtkResliceCursorThickLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorThickLineRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorThickLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorThickLineRepresentationWrap>(info.Holder());
	vtkResliceCursorThickLineRepresentation *native = (vtkResliceCursorThickLineRepresentation *)wrapper->native.GetPointer();
	vtkResliceCursorThickLineRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkResliceCursorThickLineRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorThickLineRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorThickLineRepresentationWrap *w = new VtkResliceCursorThickLineRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorThickLineRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorThickLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorThickLineRepresentationWrap>(info.Holder());
	vtkResliceCursorThickLineRepresentation *native = (vtkResliceCursorThickLineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkResliceCursorThickLineRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkResliceCursorThickLineRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkResliceCursorThickLineRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResliceCursorThickLineRepresentationWrap *w = new VtkResliceCursorThickLineRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorThickLineRepresentationWrap::SetResliceParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorThickLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorThickLineRepresentationWrap>(info.Holder());
	vtkResliceCursorThickLineRepresentation *native = (vtkResliceCursorThickLineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetResliceParameters(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

