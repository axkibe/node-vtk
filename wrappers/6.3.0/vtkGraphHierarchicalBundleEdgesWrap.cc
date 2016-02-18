/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphAlgorithmWrap.h"
#include "vtkGraphHierarchicalBundleEdgesWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphHierarchicalBundleEdgesWrap::ptpl;

VtkGraphHierarchicalBundleEdgesWrap::VtkGraphHierarchicalBundleEdgesWrap()
{ }

VtkGraphHierarchicalBundleEdgesWrap::VtkGraphHierarchicalBundleEdgesWrap(vtkSmartPointer<vtkGraphHierarchicalBundleEdges> _native)
{ native = _native; }

VtkGraphHierarchicalBundleEdgesWrap::~VtkGraphHierarchicalBundleEdgesWrap()
{ }

void VtkGraphHierarchicalBundleEdgesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphHierarchicalBundleEdges").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphHierarchicalBundleEdges").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphHierarchicalBundleEdgesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphHierarchicalBundleEdgesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphHierarchicalBundleEdgesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DirectMappingOff", DirectMappingOff);
	Nan::SetPrototypeMethod(tpl, "directMappingOff", DirectMappingOff);

	Nan::SetPrototypeMethod(tpl, "DirectMappingOn", DirectMappingOn);
	Nan::SetPrototypeMethod(tpl, "directMappingOn", DirectMappingOn);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetBundlingStrength", GetBundlingStrength);
	Nan::SetPrototypeMethod(tpl, "getBundlingStrength", GetBundlingStrength);

	Nan::SetPrototypeMethod(tpl, "GetBundlingStrengthMaxValue", GetBundlingStrengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getBundlingStrengthMaxValue", GetBundlingStrengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetBundlingStrengthMinValue", GetBundlingStrengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getBundlingStrengthMinValue", GetBundlingStrengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDirectMapping", GetDirectMapping);
	Nan::SetPrototypeMethod(tpl, "getDirectMapping", GetDirectMapping);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBundlingStrength", SetBundlingStrength);
	Nan::SetPrototypeMethod(tpl, "setBundlingStrength", SetBundlingStrength);

	Nan::SetPrototypeMethod(tpl, "SetDirectMapping", SetDirectMapping);
	Nan::SetPrototypeMethod(tpl, "setDirectMapping", SetDirectMapping);

#ifdef VTK_NODE_PLUS_VTKGRAPHHIERARCHICALBUNDLEEDGESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGRAPHHIERARCHICALBUNDLEEDGESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGraphHierarchicalBundleEdgesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphHierarchicalBundleEdges> native = vtkSmartPointer<vtkGraphHierarchicalBundleEdges>::New();
		VtkGraphHierarchicalBundleEdgesWrap* obj = new VtkGraphHierarchicalBundleEdgesWrap(native);
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

void VtkGraphHierarchicalBundleEdgesWrap::DirectMappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DirectMappingOff();
}

void VtkGraphHierarchicalBundleEdgesWrap::DirectMappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DirectMappingOn();
}

void VtkGraphHierarchicalBundleEdgesWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphHierarchicalBundleEdgesWrap::GetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBundlingStrength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphHierarchicalBundleEdgesWrap::GetBundlingStrengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBundlingStrengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphHierarchicalBundleEdgesWrap::GetBundlingStrengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBundlingStrengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphHierarchicalBundleEdgesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphHierarchicalBundleEdgesWrap::GetDirectMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirectMapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphHierarchicalBundleEdgesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
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

void VtkGraphHierarchicalBundleEdgesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	vtkGraphHierarchicalBundleEdges * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGraphHierarchicalBundleEdgesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphHierarchicalBundleEdgesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphHierarchicalBundleEdgesWrap *w = new VtkGraphHierarchicalBundleEdgesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphHierarchicalBundleEdgesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphHierarchicalBundleEdges * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGraphHierarchicalBundleEdgesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphHierarchicalBundleEdgesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphHierarchicalBundleEdgesWrap *w = new VtkGraphHierarchicalBundleEdgesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphHierarchicalBundleEdgesWrap::SetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBundlingStrength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphHierarchicalBundleEdgesWrap::SetDirectMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphHierarchicalBundleEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkGraphHierarchicalBundleEdgesWrap>(info.Holder());
	vtkGraphHierarchicalBundleEdges *native = (vtkGraphHierarchicalBundleEdges *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirectMapping(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

