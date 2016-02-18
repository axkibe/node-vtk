/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkVoidArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVoidArrayWrap::ptpl;

VtkVoidArrayWrap::VtkVoidArrayWrap()
{ }

VtkVoidArrayWrap::VtkVoidArrayWrap(vtkSmartPointer<vtkVoidArray> _native)
{ native = _native; }

VtkVoidArrayWrap::~VtkVoidArrayWrap()
{ }

void VtkVoidArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVoidArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VoidArray").ToLocalChecked(), ConstructorGetter);
}

void VtkVoidArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVoidArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVoidArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeSize", GetDataTypeSize);
	Nan::SetPrototypeMethod(tpl, "getDataTypeSize", GetDataTypeSize);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

#ifdef VTK_NODE_PLUS_VTKVOIDARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVOIDARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkVoidArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVoidArray> native = vtkSmartPointer<vtkVoidArray>::New();
		VtkVoidArrayWrap* obj = new VtkVoidArrayWrap(native);
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

void VtkVoidArrayWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVoidArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVoidArrayWrap *a0 = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkVoidArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoidArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVoidArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoidArrayWrap::GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoidArrayWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkVoidArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
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

void VtkVoidArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
	vtkVoidArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVoidArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVoidArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVoidArrayWrap *w = new VtkVoidArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVoidArrayWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkVoidArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVoidArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkVoidArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVoidArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVoidArrayWrap *w = new VtkVoidArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoidArrayWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoidArrayWrap *wrapper = ObjectWrap::Unwrap<VtkVoidArrayWrap>(info.Holder());
	vtkVoidArray *native = (vtkVoidArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

