/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkQuadratureSchemeDefinitionWrap.h"
#include "vtkInformationQuadratureSchemeDefinitionVectorKeyWrap.h"
#include "vtkInformationStringKeyWrap.h"
#include "vtkXMLDataElementWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkQuadratureSchemeDefinitionWrap::ptpl;

VtkQuadratureSchemeDefinitionWrap::VtkQuadratureSchemeDefinitionWrap()
{ }

VtkQuadratureSchemeDefinitionWrap::VtkQuadratureSchemeDefinitionWrap(vtkSmartPointer<vtkQuadratureSchemeDefinition> _native)
{ native = _native; }

VtkQuadratureSchemeDefinitionWrap::~VtkQuadratureSchemeDefinitionWrap()
{ }

void VtkQuadratureSchemeDefinitionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkQuadratureSchemeDefinition").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("QuadratureSchemeDefinition").ToLocalChecked(), ConstructorGetter);
}

void VtkQuadratureSchemeDefinitionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkQuadratureSchemeDefinitionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkQuadratureSchemeDefinitionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "DICTIONARY", DICTIONARY);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetCellType", GetCellType);
	Nan::SetPrototypeMethod(tpl, "getCellType", GetCellType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNodes", GetNumberOfNodes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNodes", GetNumberOfNodes);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfQuadraturePoints", GetNumberOfQuadraturePoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfQuadraturePoints", GetNumberOfQuadraturePoints);

	Nan::SetPrototypeMethod(tpl, "GetQuadratureKey", GetQuadratureKey);
	Nan::SetPrototypeMethod(tpl, "getQuadratureKey", GetQuadratureKey);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "QUADRATURE_OFFSET_ARRAY_NAME", QUADRATURE_OFFSET_ARRAY_NAME);

	Nan::SetPrototypeMethod(tpl, "RestoreState", RestoreState);
	Nan::SetPrototypeMethod(tpl, "restoreState", RestoreState);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SaveState", SaveState);
	Nan::SetPrototypeMethod(tpl, "saveState", SaveState);

	ptpl.Reset( tpl );
}

void VtkQuadratureSchemeDefinitionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuadratureSchemeDefinition> native = vtkSmartPointer<vtkQuadratureSchemeDefinition>::New();
		VtkQuadratureSchemeDefinitionWrap* obj = new VtkQuadratureSchemeDefinitionWrap(native);
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

void VtkQuadratureSchemeDefinitionWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Clear();
}

void VtkQuadratureSchemeDefinitionWrap::DICTIONARY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	vtkInformationQuadratureSchemeDefinitionVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DICTIONARY();
		VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationQuadratureSchemeDefinitionVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationQuadratureSchemeDefinitionVectorKeyWrap *w = new VtkInformationQuadratureSchemeDefinitionVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadratureSchemeDefinitionWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkQuadratureSchemeDefinitionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkQuadratureSchemeDefinitionWrap *a0 = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->DeepCopy(
			(vtkQuadratureSchemeDefinition *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadratureSchemeDefinitionWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadratureSchemeDefinitionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuadratureSchemeDefinitionWrap::GetNumberOfNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadratureSchemeDefinitionWrap::GetNumberOfQuadraturePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfQuadraturePoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadratureSchemeDefinitionWrap::GetQuadratureKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQuadratureKey();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadratureSchemeDefinitionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
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

void VtkQuadratureSchemeDefinitionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	vtkQuadratureSchemeDefinition * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkQuadratureSchemeDefinitionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuadratureSchemeDefinitionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadratureSchemeDefinitionWrap *w = new VtkQuadratureSchemeDefinitionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadratureSchemeDefinitionWrap::QUADRATURE_OFFSET_ARRAY_NAME(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	vtkInformationStringKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->QUADRATURE_OFFSET_ARRAY_NAME();
		VtkInformationStringKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationStringKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationStringKeyWrap *w = new VtkInformationStringKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadratureSchemeDefinitionWrap::RestoreState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkXMLDataElementWrap::ptpl))->HasInstance(info[0]))
	{
		VtkXMLDataElementWrap *a0 = ObjectWrap::Unwrap<VtkXMLDataElementWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RestoreState(
			(vtkXMLDataElement *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadratureSchemeDefinitionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuadratureSchemeDefinition * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkQuadratureSchemeDefinitionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkQuadratureSchemeDefinitionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuadratureSchemeDefinitionWrap *w = new VtkQuadratureSchemeDefinitionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadratureSchemeDefinitionWrap::SaveState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDefinitionWrap>(info.Holder());
	vtkQuadratureSchemeDefinition *native = (vtkQuadratureSchemeDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkXMLDataElementWrap::ptpl))->HasInstance(info[0]))
	{
		VtkXMLDataElementWrap *a0 = ObjectWrap::Unwrap<VtkXMLDataElementWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SaveState(
			(vtkXMLDataElement *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

