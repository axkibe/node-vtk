/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUniformGridAMRWrap.h"
#include "vtkOverlappingAMRWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCompositeDataIteratorWrap.h"
#include "vtkInformationIdTypeKeyWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkAMRInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOverlappingAMRWrap::ptpl;

VtkOverlappingAMRWrap::VtkOverlappingAMRWrap()
{ }

VtkOverlappingAMRWrap::VtkOverlappingAMRWrap(vtkSmartPointer<vtkOverlappingAMR> _native)
{ native = _native; }

VtkOverlappingAMRWrap::~VtkOverlappingAMRWrap()
{ }

void VtkOverlappingAMRWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOverlappingAMR").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OverlappingAMR").ToLocalChecked(), ConstructorGetter);
}

void VtkOverlappingAMRWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOverlappingAMRWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUniformGridAMRWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUniformGridAMRWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOverlappingAMRWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Audit", Audit);
	Nan::SetPrototypeMethod(tpl, "audit", Audit);

	Nan::SetPrototypeMethod(tpl, "GenerateParentChildInformation", GenerateParentChildInformation);
	Nan::SetPrototypeMethod(tpl, "generateParentChildInformation", GenerateParentChildInformation);

	Nan::SetPrototypeMethod(tpl, "GetAMRInfo", GetAMRInfo);
	Nan::SetPrototypeMethod(tpl, "getAMRInfo", GetAMRInfo);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetRefinementRatio", GetRefinementRatio);
	Nan::SetPrototypeMethod(tpl, "getRefinementRatio", GetRefinementRatio);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NUMBER_OF_BLANKED_POINTS", NUMBER_OF_BLANKED_POINTS);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NewIterator", NewIterator);
	Nan::SetPrototypeMethod(tpl, "newIterator", NewIterator);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAMRInfo", SetAMRInfo);
	Nan::SetPrototypeMethod(tpl, "setAMRInfo", SetAMRInfo);

	ptpl.Reset( tpl );
}

void VtkOverlappingAMRWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOverlappingAMR> native = vtkSmartPointer<vtkOverlappingAMR>::New();
		VtkOverlappingAMRWrap* obj = new VtkOverlappingAMRWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOverlappingAMRWrap::Audit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Audit();
}

void VtkOverlappingAMRWrap::GenerateParentChildInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateParentChildInformation();
}

void VtkOverlappingAMRWrap::GetAMRInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	vtkAMRInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAMRInfo();
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

void VtkOverlappingAMRWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOverlappingAMRWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkOverlappingAMR * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkOverlappingAMRWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkOverlappingAMRWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkOverlappingAMRWrap *w = new VtkOverlappingAMRWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkOverlappingAMR * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkOverlappingAMRWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOverlappingAMRWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOverlappingAMRWrap *w = new VtkOverlappingAMRWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOverlappingAMRWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOverlappingAMRWrap::GetRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataIteratorWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetRefinementRatio(
			(vtkCompositeDataIterator *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOverlappingAMRWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
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

void VtkOverlappingAMRWrap::NUMBER_OF_BLANKED_POINTS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	vtkInformationIdTypeKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NUMBER_OF_BLANKED_POINTS();
		VtkInformationIdTypeKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIdTypeKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIdTypeKeyWrap *w = new VtkInformationIdTypeKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverlappingAMRWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	vtkOverlappingAMR * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOverlappingAMRWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOverlappingAMRWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOverlappingAMRWrap *w = new VtkOverlappingAMRWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverlappingAMRWrap::NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	vtkCompositeDataIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewIterator();
		VtkCompositeDataIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataIteratorWrap *w = new VtkCompositeDataIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverlappingAMRWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOverlappingAMR * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOverlappingAMRWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOverlappingAMRWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOverlappingAMRWrap *w = new VtkOverlappingAMRWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOverlappingAMRWrap::SetAMRInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRWrap>(info.Holder());
	vtkOverlappingAMR *native = (vtkOverlappingAMR *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAMRInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAMRInformationWrap *a0 = ObjectWrap::Unwrap<VtkAMRInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAMRInfo(
			(vtkAMRInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

