/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkSplitFieldWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSplitFieldWrap::ptpl;

VtkSplitFieldWrap::VtkSplitFieldWrap()
{ }

VtkSplitFieldWrap::VtkSplitFieldWrap(vtkSmartPointer<vtkSplitField> _native)
{ native = _native; }

VtkSplitFieldWrap::~VtkSplitFieldWrap()
{ }

void VtkSplitFieldWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSplitField").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SplitField").ToLocalChecked(), ConstructorGetter);
}

void VtkSplitFieldWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSplitFieldWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSplitFieldWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputField", SetInputField);
	Nan::SetPrototypeMethod(tpl, "setInputField", SetInputField);

	Nan::SetPrototypeMethod(tpl, "Split", Split);
	Nan::SetPrototypeMethod(tpl, "split", Split);

#ifdef VTK_NODE_PLUS_VTKSPLITFIELDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSPLITFIELDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSplitFieldWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSplitField> native = vtkSmartPointer<vtkSplitField>::New();
		VtkSplitFieldWrap* obj = new VtkSplitFieldWrap(native);
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

void VtkSplitFieldWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitFieldWrap *wrapper = ObjectWrap::Unwrap<VtkSplitFieldWrap>(info.Holder());
	vtkSplitField *native = (vtkSplitField *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplitFieldWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitFieldWrap *wrapper = ObjectWrap::Unwrap<VtkSplitFieldWrap>(info.Holder());
	vtkSplitField *native = (vtkSplitField *)wrapper->native.GetPointer();
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

void VtkSplitFieldWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitFieldWrap *wrapper = ObjectWrap::Unwrap<VtkSplitFieldWrap>(info.Holder());
	vtkSplitField *native = (vtkSplitField *)wrapper->native.GetPointer();
	vtkSplitField * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSplitFieldWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplitFieldWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplitFieldWrap *w = new VtkSplitFieldWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplitFieldWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitFieldWrap *wrapper = ObjectWrap::Unwrap<VtkSplitFieldWrap>(info.Holder());
	vtkSplitField *native = (vtkSplitField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSplitField * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSplitFieldWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSplitFieldWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSplitFieldWrap *w = new VtkSplitFieldWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplitFieldWrap::SetInputField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitFieldWrap *wrapper = ObjectWrap::Unwrap<VtkSplitFieldWrap>(info.Holder());
	vtkSplitField *native = (vtkSplitField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputField(
				*a0,
				*a1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputField(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputField(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplitFieldWrap::Split(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplitFieldWrap *wrapper = ObjectWrap::Unwrap<VtkSplitFieldWrap>(info.Holder());
	vtkSplitField *native = (vtkSplitField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Split(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

