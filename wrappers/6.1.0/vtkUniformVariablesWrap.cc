/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkUniformVariablesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUniformVariablesWrap::ptpl;

VtkUniformVariablesWrap::VtkUniformVariablesWrap()
{ }

VtkUniformVariablesWrap::VtkUniformVariablesWrap(vtkSmartPointer<vtkUniformVariables> _native)
{ native = _native; }

VtkUniformVariablesWrap::~VtkUniformVariablesWrap()
{ }

void VtkUniformVariablesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUniformVariables").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UniformVariables").ToLocalChecked(), ConstructorGetter);
}

void VtkUniformVariablesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUniformVariablesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUniformVariablesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentName", GetCurrentName);
	Nan::SetPrototypeMethod(tpl, "getCurrentName", GetCurrentName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Merge", Merge);
	Nan::SetPrototypeMethod(tpl, "merge", Merge);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Next", Next);
	Nan::SetPrototypeMethod(tpl, "next", Next);

	Nan::SetPrototypeMethod(tpl, "RemoveAllUniforms", RemoveAllUniforms);
	Nan::SetPrototypeMethod(tpl, "removeAllUniforms", RemoveAllUniforms);

	Nan::SetPrototypeMethod(tpl, "RemoveUniform", RemoveUniform);
	Nan::SetPrototypeMethod(tpl, "removeUniform", RemoveUniform);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Send", Send);
	Nan::SetPrototypeMethod(tpl, "send", Send);

	Nan::SetPrototypeMethod(tpl, "SendCurrentUniform", SendCurrentUniform);
	Nan::SetPrototypeMethod(tpl, "sendCurrentUniform", SendCurrentUniform);

	Nan::SetPrototypeMethod(tpl, "Start", Start);
	Nan::SetPrototypeMethod(tpl, "start", Start);

	ptpl.Reset( tpl );
}

void VtkUniformVariablesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUniformVariables> native = vtkSmartPointer<vtkUniformVariables>::New();
		VtkUniformVariablesWrap* obj = new VtkUniformVariablesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUniformVariablesWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkUniformVariablesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkUniformVariablesWrap *a0 = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkUniformVariables *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformVariablesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUniformVariablesWrap::GetCurrentName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUniformVariablesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
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

void VtkUniformVariablesWrap::Merge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkUniformVariablesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkUniformVariablesWrap *a0 = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Merge(
			(vtkUniformVariables *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformVariablesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	vtkUniformVariables * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkUniformVariablesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUniformVariablesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUniformVariablesWrap *w = new VtkUniformVariablesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUniformVariablesWrap::Next(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Next();
}

void VtkUniformVariablesWrap::RemoveAllUniforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllUniforms();
}

void VtkUniformVariablesWrap::RemoveUniform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveUniform(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformVariablesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUniformVariables * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkUniformVariablesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUniformVariablesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUniformVariablesWrap *w = new VtkUniformVariablesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformVariablesWrap::Send(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Send(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformVariablesWrap::SendCurrentUniform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SendCurrentUniform(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUniformVariablesWrap::Start(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUniformVariablesWrap *wrapper = ObjectWrap::Unwrap<VtkUniformVariablesWrap>(info.Holder());
	vtkUniformVariables *native = (vtkUniformVariables *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Start();
}

