/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkPlaneCutterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPlaneWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlaneCutterWrap::ptpl;

VtkPlaneCutterWrap::VtkPlaneCutterWrap()
{ }

VtkPlaneCutterWrap::VtkPlaneCutterWrap(vtkSmartPointer<vtkPlaneCutter> _native)
{ native = _native; }

VtkPlaneCutterWrap::~VtkPlaneCutterWrap()
{ }

void VtkPlaneCutterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlaneCutter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlaneCutter").ToLocalChecked(), ConstructorGetter);
}

void VtkPlaneCutterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlaneCutterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlaneCutterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildHierarchyOff", BuildHierarchyOff);
	Nan::SetPrototypeMethod(tpl, "buildHierarchyOff", BuildHierarchyOff);

	Nan::SetPrototypeMethod(tpl, "BuildHierarchyOn", BuildHierarchyOn);
	Nan::SetPrototypeMethod(tpl, "buildHierarchyOn", BuildHierarchyOn);

	Nan::SetPrototypeMethod(tpl, "BuildTreeOff", BuildTreeOff);
	Nan::SetPrototypeMethod(tpl, "buildTreeOff", BuildTreeOff);

	Nan::SetPrototypeMethod(tpl, "BuildTreeOn", BuildTreeOn);
	Nan::SetPrototypeMethod(tpl, "buildTreeOn", BuildTreeOn);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOff", ComputeNormalsOff);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOff", ComputeNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOn", ComputeNormalsOn);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOn", ComputeNormalsOn);

	Nan::SetPrototypeMethod(tpl, "GeneratePolygonsOff", GeneratePolygonsOff);
	Nan::SetPrototypeMethod(tpl, "generatePolygonsOff", GeneratePolygonsOff);

	Nan::SetPrototypeMethod(tpl, "GeneratePolygonsOn", GeneratePolygonsOn);
	Nan::SetPrototypeMethod(tpl, "generatePolygonsOn", GeneratePolygonsOn);

	Nan::SetPrototypeMethod(tpl, "GetBuildHierarchy", GetBuildHierarchy);
	Nan::SetPrototypeMethod(tpl, "getBuildHierarchy", GetBuildHierarchy);

	Nan::SetPrototypeMethod(tpl, "GetBuildTree", GetBuildTree);
	Nan::SetPrototypeMethod(tpl, "getBuildTree", GetBuildTree);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetGeneratePolygons", GetGeneratePolygons);
	Nan::SetPrototypeMethod(tpl, "getGeneratePolygons", GetGeneratePolygons);

	Nan::SetPrototypeMethod(tpl, "GetInterpolateAttributes", GetInterpolateAttributes);
	Nan::SetPrototypeMethod(tpl, "getInterpolateAttributes", GetInterpolateAttributes);

	Nan::SetPrototypeMethod(tpl, "GetPlane", GetPlane);
	Nan::SetPrototypeMethod(tpl, "getPlane", GetPlane);

	Nan::SetPrototypeMethod(tpl, "InterpolateAttributesOff", InterpolateAttributesOff);
	Nan::SetPrototypeMethod(tpl, "interpolateAttributesOff", InterpolateAttributesOff);

	Nan::SetPrototypeMethod(tpl, "InterpolateAttributesOn", InterpolateAttributesOn);
	Nan::SetPrototypeMethod(tpl, "interpolateAttributesOn", InterpolateAttributesOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBuildHierarchy", SetBuildHierarchy);
	Nan::SetPrototypeMethod(tpl, "setBuildHierarchy", SetBuildHierarchy);

	Nan::SetPrototypeMethod(tpl, "SetBuildTree", SetBuildTree);
	Nan::SetPrototypeMethod(tpl, "setBuildTree", SetBuildTree);

	Nan::SetPrototypeMethod(tpl, "SetComputeNormals", SetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "setComputeNormals", SetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "SetGeneratePolygons", SetGeneratePolygons);
	Nan::SetPrototypeMethod(tpl, "setGeneratePolygons", SetGeneratePolygons);

	Nan::SetPrototypeMethod(tpl, "SetInterpolateAttributes", SetInterpolateAttributes);
	Nan::SetPrototypeMethod(tpl, "setInterpolateAttributes", SetInterpolateAttributes);

	Nan::SetPrototypeMethod(tpl, "SetPlane", SetPlane);
	Nan::SetPrototypeMethod(tpl, "setPlane", SetPlane);

#ifdef VTK_NODE_PLUS_VTKPLANECUTTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLANECUTTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPlaneCutterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlaneCutter> native = vtkSmartPointer<vtkPlaneCutter>::New();
		VtkPlaneCutterWrap* obj = new VtkPlaneCutterWrap(native);
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

void VtkPlaneCutterWrap::BuildHierarchyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildHierarchyOff();
}

void VtkPlaneCutterWrap::BuildHierarchyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildHierarchyOn();
}

void VtkPlaneCutterWrap::BuildTreeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildTreeOff();
}

void VtkPlaneCutterWrap::BuildTreeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildTreeOn();
}

void VtkPlaneCutterWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkPlaneCutterWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkPlaneCutterWrap::GeneratePolygonsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePolygonsOff();
}

void VtkPlaneCutterWrap::GeneratePolygonsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePolygonsOn();
}

void VtkPlaneCutterWrap::GetBuildHierarchy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBuildHierarchy();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneCutterWrap::GetBuildTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBuildTree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneCutterWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneCutterWrap::GetGeneratePolygons(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeneratePolygons();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneCutterWrap::GetInterpolateAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolateAttributes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneCutterWrap::GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	vtkPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlane();
	VtkPlaneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlaneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWrap *w = new VtkPlaneWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlaneCutterWrap::InterpolateAttributesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateAttributesOff();
}

void VtkPlaneCutterWrap::InterpolateAttributesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateAttributesOn();
}

void VtkPlaneCutterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	vtkPlaneCutter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPlaneCutterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlaneCutterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneCutterWrap *w = new VtkPlaneCutterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlaneCutterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPlaneCutter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPlaneCutterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlaneCutterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlaneCutterWrap *w = new VtkPlaneCutterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneCutterWrap::SetBuildHierarchy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBuildHierarchy(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneCutterWrap::SetBuildTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBuildTree(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneCutterWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeNormals(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneCutterWrap::SetGeneratePolygons(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeneratePolygons(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneCutterWrap::SetInterpolateAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolateAttributes(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneCutterWrap::SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneCutterWrap>(info.Holder());
	vtkPlaneCutter *native = (vtkPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
