/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPropertyWrap.h"
#include "vtkRIBPropertyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRIBPropertyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkRIBPropertyWrap::ptpl;

VtkRIBPropertyWrap::VtkRIBPropertyWrap()
{ }

VtkRIBPropertyWrap::VtkRIBPropertyWrap(vtkSmartPointer<vtkRIBProperty> _native)
{ native = _native; }

VtkRIBPropertyWrap::~VtkRIBPropertyWrap()
{ }

void VtkRIBPropertyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPropertyWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPropertyWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkRIBPropertyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkRIBProperty").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("RIBProperty").ToLocalChecked(),tpl->GetFunction());
}

void VtkRIBPropertyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddParameter", AddParameter);
	Nan::SetPrototypeMethod(tpl, "addParameter", AddParameter);

	Nan::SetPrototypeMethod(tpl, "AddVariable", AddVariable);
	Nan::SetPrototypeMethod(tpl, "addVariable", AddVariable);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDeclarations", GetDeclarations);
	Nan::SetPrototypeMethod(tpl, "getDeclarations", GetDeclarations);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementShader", GetDisplacementShader);
	Nan::SetPrototypeMethod(tpl, "getDisplacementShader", GetDisplacementShader);

	Nan::SetPrototypeMethod(tpl, "GetParameters", GetParameters);
	Nan::SetPrototypeMethod(tpl, "getParameters", GetParameters);

	Nan::SetPrototypeMethod(tpl, "GetSurfaceShader", GetSurfaceShader);
	Nan::SetPrototypeMethod(tpl, "getSurfaceShader", GetSurfaceShader);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementShader", SetDisplacementShader);
	Nan::SetPrototypeMethod(tpl, "setDisplacementShader", SetDisplacementShader);

	Nan::SetPrototypeMethod(tpl, "SetParameter", SetParameter);
	Nan::SetPrototypeMethod(tpl, "setParameter", SetParameter);

	Nan::SetPrototypeMethod(tpl, "SetSurfaceShader", SetSurfaceShader);
	Nan::SetPrototypeMethod(tpl, "setSurfaceShader", SetSurfaceShader);

	Nan::SetPrototypeMethod(tpl, "SetVariable", SetVariable);
	Nan::SetPrototypeMethod(tpl, "setVariable", SetVariable);

}

void VtkRIBPropertyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRIBProperty> native = vtkSmartPointer<vtkRIBProperty>::New();
		VtkRIBPropertyWrap* obj = new VtkRIBPropertyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRIBPropertyWrap::AddParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddParameter(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBPropertyWrap::AddVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddVariable(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBPropertyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBPropertyWrap::GetDeclarations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDeclarations();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBPropertyWrap::GetDisplacementShader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementShader();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBPropertyWrap::GetParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParameters();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBPropertyWrap::GetSurfaceShader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSurfaceShader();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBPropertyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkRIBPropertyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	vtkRIBProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRIBPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRIBPropertyWrap *w = new VtkRIBPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRIBPropertyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRIBProperty * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkRIBPropertyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRIBPropertyWrap *w = new VtkRIBPropertyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBPropertyWrap::SetDisplacementShader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementShader(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBPropertyWrap::SetParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetParameter(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBPropertyWrap::SetSurfaceShader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSurfaceShader(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBPropertyWrap::SetVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkRIBPropertyWrap>(info.Holder());
	vtkRIBProperty *native = (vtkRIBProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetVariable(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

