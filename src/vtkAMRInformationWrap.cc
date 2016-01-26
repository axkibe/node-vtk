/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAMRInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRInformationWrap::ptpl;

VtkAMRInformationWrap::VtkAMRInformationWrap()
{ }

VtkAMRInformationWrap::VtkAMRInformationWrap(vtkSmartPointer<vtkAMRInformation> _native)
{ native = _native; }

VtkAMRInformationWrap::~VtkAMRInformationWrap()
{ }

void VtkAMRInformationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRInformation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRInformation").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRInformationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRInformationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRInformationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GenerateParentChildInformation", GenerateParentChildInformation);
	Nan::SetPrototypeMethod(tpl, "generateParentChildInformation", GenerateParentChildInformation);

	Nan::SetPrototypeMethod(tpl, "GenerateRefinementRatio", GenerateRefinementRatio);
	Nan::SetPrototypeMethod(tpl, "generateRefinementRatio", GenerateRefinementRatio);

	Nan::SetPrototypeMethod(tpl, "GetAMRBlockSourceIndex", GetAMRBlockSourceIndex);
	Nan::SetPrototypeMethod(tpl, "getAMRBlockSourceIndex", GetAMRBlockSourceIndex);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGridDescription", GetGridDescription);
	Nan::SetPrototypeMethod(tpl, "getGridDescription", GetGridDescription);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAMRBlockSourceIndex", SetAMRBlockSourceIndex);
	Nan::SetPrototypeMethod(tpl, "setAMRBlockSourceIndex", SetAMRBlockSourceIndex);

	Nan::SetPrototypeMethod(tpl, "SetGridDescription", SetGridDescription);
	Nan::SetPrototypeMethod(tpl, "setGridDescription", SetGridDescription);

	ptpl.Reset( tpl );
}

void VtkAMRInformationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRInformation> native = vtkSmartPointer<vtkAMRInformation>::New();
		VtkAMRInformationWrap* obj = new VtkAMRInformationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAMRInformationWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAMRInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAMRInformationWrap *a0 = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkAMRInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRInformationWrap::GenerateParentChildInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateParentChildInformation();
}

void VtkAMRInformationWrap::GenerateRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateRefinementRatio();
}

void VtkAMRInformationWrap::GetAMRBlockSourceIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAMRBlockSourceIndex(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRInformationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRInformationWrap::GetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridDescription();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRInformationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
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

void VtkAMRInformationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	vtkAMRInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAMRInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRInformationWrap *w = new VtkAMRInformationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRInformationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRInformation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAMRInformationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRInformationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRInformationWrap *w = new VtkAMRInformationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRInformationWrap::SetAMRBlockSourceIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAMRBlockSourceIndex(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRInformationWrap::SetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRInformationWrap *wrapper = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info.Holder());
	vtkAMRInformation *native = (vtkAMRInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGridDescription(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

