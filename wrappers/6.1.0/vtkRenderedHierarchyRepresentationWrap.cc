/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderedGraphRepresentationWrap.h"
#include "vtkRenderedHierarchyRepresentationWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRenderedHierarchyRepresentationWrap::ptpl;

VtkRenderedHierarchyRepresentationWrap::VtkRenderedHierarchyRepresentationWrap()
{ }

VtkRenderedHierarchyRepresentationWrap::VtkRenderedHierarchyRepresentationWrap(vtkSmartPointer<vtkRenderedHierarchyRepresentation> _native)
{ native = _native; }

VtkRenderedHierarchyRepresentationWrap::~VtkRenderedHierarchyRepresentationWrap()
{ }

void VtkRenderedHierarchyRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRenderedHierarchyRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RenderedHierarchyRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkRenderedHierarchyRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRenderedHierarchyRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderedGraphRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderedGraphRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRenderedHierarchyRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ColorGraphEdgesByArrayOff", ColorGraphEdgesByArrayOff);
	Nan::SetPrototypeMethod(tpl, "colorGraphEdgesByArrayOff", ColorGraphEdgesByArrayOff);

	Nan::SetPrototypeMethod(tpl, "ColorGraphEdgesByArrayOn", ColorGraphEdgesByArrayOn);
	Nan::SetPrototypeMethod(tpl, "colorGraphEdgesByArrayOn", ColorGraphEdgesByArrayOn);

	Nan::SetPrototypeMethod(tpl, "GetBundlingStrength", GetBundlingStrength);
	Nan::SetPrototypeMethod(tpl, "getBundlingStrength", GetBundlingStrength);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGraphEdgeColorArrayName", GetGraphEdgeColorArrayName);
	Nan::SetPrototypeMethod(tpl, "getGraphEdgeColorArrayName", GetGraphEdgeColorArrayName);

	Nan::SetPrototypeMethod(tpl, "GetGraphEdgeLabelArrayName", GetGraphEdgeLabelArrayName);
	Nan::SetPrototypeMethod(tpl, "getGraphEdgeLabelArrayName", GetGraphEdgeLabelArrayName);

	Nan::SetPrototypeMethod(tpl, "GetGraphEdgeLabelFontSize", GetGraphEdgeLabelFontSize);
	Nan::SetPrototypeMethod(tpl, "getGraphEdgeLabelFontSize", GetGraphEdgeLabelFontSize);

	Nan::SetPrototypeMethod(tpl, "GetGraphSplineType", GetGraphSplineType);
	Nan::SetPrototypeMethod(tpl, "getGraphSplineType", GetGraphSplineType);

	Nan::SetPrototypeMethod(tpl, "GraphEdgeLabelVisibilityOff", GraphEdgeLabelVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "graphEdgeLabelVisibilityOff", GraphEdgeLabelVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "GraphEdgeLabelVisibilityOn", GraphEdgeLabelVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "graphEdgeLabelVisibilityOn", GraphEdgeLabelVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "GraphVisibilityOff", GraphVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "graphVisibilityOff", GraphVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "GraphVisibilityOn", GraphVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "graphVisibilityOn", GraphVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBundlingStrength", SetBundlingStrength);
	Nan::SetPrototypeMethod(tpl, "setBundlingStrength", SetBundlingStrength);

	Nan::SetPrototypeMethod(tpl, "SetGraphEdgeColorArrayName", SetGraphEdgeColorArrayName);
	Nan::SetPrototypeMethod(tpl, "setGraphEdgeColorArrayName", SetGraphEdgeColorArrayName);

	Nan::SetPrototypeMethod(tpl, "SetGraphEdgeColorToSplineFraction", SetGraphEdgeColorToSplineFraction);
	Nan::SetPrototypeMethod(tpl, "setGraphEdgeColorToSplineFraction", SetGraphEdgeColorToSplineFraction);

	Nan::SetPrototypeMethod(tpl, "SetGraphEdgeLabelArrayName", SetGraphEdgeLabelArrayName);
	Nan::SetPrototypeMethod(tpl, "setGraphEdgeLabelArrayName", SetGraphEdgeLabelArrayName);

	Nan::SetPrototypeMethod(tpl, "SetGraphEdgeLabelFontSize", SetGraphEdgeLabelFontSize);
	Nan::SetPrototypeMethod(tpl, "setGraphEdgeLabelFontSize", SetGraphEdgeLabelFontSize);

	Nan::SetPrototypeMethod(tpl, "SetGraphSplineType", SetGraphSplineType);
	Nan::SetPrototypeMethod(tpl, "setGraphSplineType", SetGraphSplineType);

	ptpl.Reset( tpl );
}

void VtkRenderedHierarchyRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderedHierarchyRepresentation> native = vtkSmartPointer<vtkRenderedHierarchyRepresentation>::New();
		VtkRenderedHierarchyRepresentationWrap* obj = new VtkRenderedHierarchyRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRenderedHierarchyRepresentationWrap::ColorGraphEdgesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorGraphEdgesByArrayOff();
}

void VtkRenderedHierarchyRepresentationWrap::ColorGraphEdgesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorGraphEdgesByArrayOn();
}

void VtkRenderedHierarchyRepresentationWrap::GetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetBundlingStrength(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBundlingStrength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderedHierarchyRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderedHierarchyRepresentationWrap::GetGraphEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGraphEdgeColorArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraphEdgeColorArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderedHierarchyRepresentationWrap::GetGraphEdgeLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGraphEdgeLabelArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraphEdgeLabelArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderedHierarchyRepresentationWrap::GetGraphEdgeLabelFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGraphEdgeLabelFontSize(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraphEdgeLabelFontSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderedHierarchyRepresentationWrap::GetGraphSplineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGraphSplineType(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedHierarchyRepresentationWrap::GraphEdgeLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GraphEdgeLabelVisibilityOff();
}

void VtkRenderedHierarchyRepresentationWrap::GraphEdgeLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GraphEdgeLabelVisibilityOn();
}

void VtkRenderedHierarchyRepresentationWrap::GraphVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GraphVisibilityOff();
}

void VtkRenderedHierarchyRepresentationWrap::GraphVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GraphVisibilityOn();
}

void VtkRenderedHierarchyRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
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

void VtkRenderedHierarchyRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	vtkRenderedHierarchyRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRenderedHierarchyRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderedHierarchyRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderedHierarchyRepresentationWrap *w = new VtkRenderedHierarchyRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderedHierarchyRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRenderedHierarchyRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRenderedHierarchyRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRenderedHierarchyRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderedHierarchyRepresentationWrap *w = new VtkRenderedHierarchyRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedHierarchyRepresentationWrap::SetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBundlingStrength(
				info[0]->NumberValue(),
				info[1]->Int32Value()
			);
			return;
		}
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

void VtkRenderedHierarchyRepresentationWrap::SetGraphEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
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
			native->SetGraphEdgeColorArrayName(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraphEdgeColorArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedHierarchyRepresentationWrap::SetGraphEdgeColorToSplineFraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraphEdgeColorToSplineFraction(
			info[0]->Int32Value()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGraphEdgeColorToSplineFraction();
}

void VtkRenderedHierarchyRepresentationWrap::SetGraphEdgeLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
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
			native->SetGraphEdgeLabelArrayName(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraphEdgeLabelArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedHierarchyRepresentationWrap::SetGraphEdgeLabelFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetGraphEdgeLabelFontSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraphEdgeLabelFontSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedHierarchyRepresentationWrap::SetGraphSplineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedHierarchyRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedHierarchyRepresentationWrap>(info.Holder());
	vtkRenderedHierarchyRepresentation *native = (vtkRenderedHierarchyRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetGraphSplineType(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

