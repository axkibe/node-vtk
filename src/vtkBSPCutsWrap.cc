/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkBSPCutsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkKdNodeWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBSPCutsWrap::ptpl;

VtkBSPCutsWrap::VtkBSPCutsWrap()
{ }

VtkBSPCutsWrap::VtkBSPCutsWrap(vtkSmartPointer<vtkBSPCuts> _native)
{ native = _native; }

VtkBSPCutsWrap::~VtkBSPCutsWrap()
{ }

void VtkBSPCutsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBSPCuts").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BSPCuts").ToLocalChecked(), ConstructorGetter);
}

void VtkBSPCutsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBSPCutsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBSPCutsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateCuts", CreateCuts);
	Nan::SetPrototypeMethod(tpl, "createCuts", CreateCuts);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "Equals", Equals);
	Nan::SetPrototypeMethod(tpl, "equals", Equals);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetKdNodeTree", GetKdNodeTree);
	Nan::SetPrototypeMethod(tpl, "getKdNodeTree", GetKdNodeTree);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCuts", GetNumberOfCuts);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCuts", GetNumberOfCuts);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrintArrays", PrintArrays);
	Nan::SetPrototypeMethod(tpl, "printArrays", PrintArrays);

	Nan::SetPrototypeMethod(tpl, "PrintTree", PrintTree);
	Nan::SetPrototypeMethod(tpl, "printTree", PrintTree);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkBSPCutsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBSPCuts> native = vtkSmartPointer<vtkBSPCuts>::New();
		VtkBSPCutsWrap* obj = new VtkBSPCutsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBSPCutsWrap::CreateCuts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkKdNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkKdNodeWrap *a0 = ObjectWrap::Unwrap<VtkKdNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CreateCuts(
			(vtkKdNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPCutsWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPCutsWrap::Equals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBSPCutsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBSPCutsWrap *a0 = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Equals(
				(vtkBSPCuts *) a0->native.GetPointer(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPCutsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBSPCutsWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkBSPCuts * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkBSPCutsWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkBSPCutsWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkBSPCutsWrap *w = new VtkBSPCutsWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkBSPCuts * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkBSPCutsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBSPCutsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBSPCutsWrap *w = new VtkBSPCutsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPCutsWrap::GetKdNodeTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	vtkKdNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKdNodeTree();
		VtkKdNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkKdNodeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKdNodeWrap *w = new VtkKdNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBSPCutsWrap::GetNumberOfCuts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCuts();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBSPCutsWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkBSPCutsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
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

void VtkBSPCutsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	vtkBSPCuts * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBSPCutsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBSPCutsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBSPCutsWrap *w = new VtkBSPCutsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBSPCutsWrap::PrintArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrintArrays();
}

void VtkBSPCutsWrap::PrintTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrintTree();
}

void VtkBSPCutsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBSPCuts * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBSPCutsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBSPCutsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBSPCutsWrap *w = new VtkBSPCutsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPCutsWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPCutsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info.Holder());
	vtkBSPCuts *native = (vtkBSPCuts *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

