/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkHierarchicalGraphPipelineWrap.h"
#include "vtkActorWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkDataRepresentationWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkViewThemeWrap.h"
#include "vtkRenderViewWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalGraphPipelineWrap::ptpl;

VtkHierarchicalGraphPipelineWrap::VtkHierarchicalGraphPipelineWrap()
{ }

VtkHierarchicalGraphPipelineWrap::VtkHierarchicalGraphPipelineWrap(vtkSmartPointer<vtkHierarchicalGraphPipeline> _native)
{ native = _native; }

VtkHierarchicalGraphPipelineWrap::~VtkHierarchicalGraphPipelineWrap()
{ }

void VtkHierarchicalGraphPipelineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHierarchicalGraphPipeline").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HierarchicalGraphPipeline").ToLocalChecked(), ConstructorGetter);
}

void VtkHierarchicalGraphPipelineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHierarchicalGraphPipelineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHierarchicalGraphPipelineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ApplyViewTheme", ApplyViewTheme);
	Nan::SetPrototypeMethod(tpl, "applyViewTheme", ApplyViewTheme);

	Nan::SetPrototypeMethod(tpl, "ColorEdgesByArrayOff", ColorEdgesByArrayOff);
	Nan::SetPrototypeMethod(tpl, "colorEdgesByArrayOff", ColorEdgesByArrayOff);

	Nan::SetPrototypeMethod(tpl, "ColorEdgesByArrayOn", ColorEdgesByArrayOn);
	Nan::SetPrototypeMethod(tpl, "colorEdgesByArrayOn", ColorEdgesByArrayOn);

	Nan::SetPrototypeMethod(tpl, "ConvertSelection", ConvertSelection);
	Nan::SetPrototypeMethod(tpl, "convertSelection", ConvertSelection);

	Nan::SetPrototypeMethod(tpl, "GetActor", GetActor);
	Nan::SetPrototypeMethod(tpl, "getActor", GetActor);

	Nan::SetPrototypeMethod(tpl, "GetBundlingStrength", GetBundlingStrength);
	Nan::SetPrototypeMethod(tpl, "getBundlingStrength", GetBundlingStrength);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorArrayName", GetColorArrayName);
	Nan::SetPrototypeMethod(tpl, "getColorArrayName", GetColorArrayName);

	Nan::SetPrototypeMethod(tpl, "GetHoverArrayName", GetHoverArrayName);
	Nan::SetPrototypeMethod(tpl, "getHoverArrayName", GetHoverArrayName);

	Nan::SetPrototypeMethod(tpl, "GetLabelActor", GetLabelActor);
	Nan::SetPrototypeMethod(tpl, "getLabelActor", GetLabelActor);

	Nan::SetPrototypeMethod(tpl, "GetLabelArrayName", GetLabelArrayName);
	Nan::SetPrototypeMethod(tpl, "getLabelArrayName", GetLabelArrayName);

	Nan::SetPrototypeMethod(tpl, "GetLabelTextProperty", GetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelTextProperty", GetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetSplineType", GetSplineType);
	Nan::SetPrototypeMethod(tpl, "getSplineType", GetSplineType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOff", LabelVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOff", LabelVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOn", LabelVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOn", LabelVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrepareInputConnections", PrepareInputConnections);
	Nan::SetPrototypeMethod(tpl, "prepareInputConnections", PrepareInputConnections);

	Nan::SetPrototypeMethod(tpl, "RegisterProgress", RegisterProgress);
	Nan::SetPrototypeMethod(tpl, "registerProgress", RegisterProgress);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBundlingStrength", SetBundlingStrength);
	Nan::SetPrototypeMethod(tpl, "setBundlingStrength", SetBundlingStrength);

	Nan::SetPrototypeMethod(tpl, "SetColorArrayName", SetColorArrayName);
	Nan::SetPrototypeMethod(tpl, "setColorArrayName", SetColorArrayName);

	Nan::SetPrototypeMethod(tpl, "SetHoverArrayName", SetHoverArrayName);
	Nan::SetPrototypeMethod(tpl, "setHoverArrayName", SetHoverArrayName);

	Nan::SetPrototypeMethod(tpl, "SetLabelArrayName", SetLabelArrayName);
	Nan::SetPrototypeMethod(tpl, "setLabelArrayName", SetLabelArrayName);

	Nan::SetPrototypeMethod(tpl, "SetLabelTextProperty", SetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "setLabelTextProperty", SetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetSplineType", SetSplineType);
	Nan::SetPrototypeMethod(tpl, "setSplineType", SetSplineType);

	Nan::SetPrototypeMethod(tpl, "VisibilityOff", VisibilityOff);
	Nan::SetPrototypeMethod(tpl, "visibilityOff", VisibilityOff);

	Nan::SetPrototypeMethod(tpl, "VisibilityOn", VisibilityOn);
	Nan::SetPrototypeMethod(tpl, "visibilityOn", VisibilityOn);

	ptpl.Reset( tpl );
}

void VtkHierarchicalGraphPipelineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalGraphPipeline> native = vtkSmartPointer<vtkHierarchicalGraphPipeline>::New();
		VtkHierarchicalGraphPipelineWrap* obj = new VtkHierarchicalGraphPipelineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHierarchicalGraphPipelineWrap::ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewThemeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewThemeWrap *a0 = ObjectWrap::Unwrap<VtkViewThemeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyViewTheme(
			(vtkViewTheme *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::ColorEdgesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorEdgesByArrayOff();
}

void VtkHierarchicalGraphPipelineWrap::ColorEdgesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorEdgesByArrayOn();
}

void VtkHierarchicalGraphPipelineWrap::ConvertSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkDataRepresentationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[1]))
		{
			VtkSelectionWrap *a1 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[1]->ToObject());
			vtkSelection * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ConvertSelection(
				(vtkDataRepresentation *) a0->native.GetPointer(),
				(vtkSelection *) a1->native.GetPointer()
			);
				VtkSelectionWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkSelectionWrap *w = new VtkSelectionWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::GetActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActor();
		VtkActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalGraphPipelineWrap::GetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBundlingStrength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHierarchicalGraphPipelineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalGraphPipelineWrap::GetColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalGraphPipelineWrap::GetHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoverArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalGraphPipelineWrap::GetLabelActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	vtkActor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelActor();
		VtkActor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActor2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActor2DWrap *w = new VtkActor2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalGraphPipelineWrap::GetLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalGraphPipelineWrap::GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalGraphPipelineWrap::GetSplineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHierarchicalGraphPipelineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
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

void VtkHierarchicalGraphPipelineWrap::LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOff();
}

void VtkHierarchicalGraphPipelineWrap::LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOn();
}

void VtkHierarchicalGraphPipelineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	vtkHierarchicalGraphPipeline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHierarchicalGraphPipelineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHierarchicalGraphPipelineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalGraphPipelineWrap *w = new VtkHierarchicalGraphPipelineWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalGraphPipelineWrap::PrepareInputConnections(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[1]))
		{
			VtkAlgorithmOutputWrap *a1 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[2]))
			{
				VtkAlgorithmOutputWrap *a2 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->PrepareInputConnections(
					(vtkAlgorithmOutput *) a0->native.GetPointer(),
					(vtkAlgorithmOutput *) a1->native.GetPointer(),
					(vtkAlgorithmOutput *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::RegisterProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderViewWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderViewWrap *a0 = ObjectWrap::Unwrap<VtkRenderViewWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RegisterProgress(
			(vtkRenderView *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHierarchicalGraphPipeline * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHierarchicalGraphPipelineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHierarchicalGraphPipelineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalGraphPipelineWrap *w = new VtkHierarchicalGraphPipelineWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::SetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
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

void VtkHierarchicalGraphPipelineWrap::SetColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::SetHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHoverArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::SetLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::SetSplineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplineType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalGraphPipelineWrap::VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VisibilityOff();
}

void VtkHierarchicalGraphPipelineWrap::VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalGraphPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalGraphPipelineWrap>(info.Holder());
	vtkHierarchicalGraphPipeline *native = (vtkHierarchicalGraphPipeline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VisibilityOn();
}
