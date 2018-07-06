/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointSetWrap.h"
#include "vtkLabelHierarchyWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPointsWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "vtkIntArrayWrap.h"
#include "vtkLabelHierarchyIteratorWrap.h"
#include "vtkRendererWrap.h"
#include "vtkCameraWrap.h"
#include "vtkCoincidentPointsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLabelHierarchyWrap::ptpl;

VtkLabelHierarchyWrap::VtkLabelHierarchyWrap()
{ }

VtkLabelHierarchyWrap::VtkLabelHierarchyWrap(vtkSmartPointer<vtkLabelHierarchy> _native)
{ native = _native; }

VtkLabelHierarchyWrap::~VtkLabelHierarchyWrap()
{ }

void VtkLabelHierarchyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLabelHierarchy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LabelHierarchy").ToLocalChecked(), ConstructorGetter);
}

void VtkLabelHierarchyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLabelHierarchyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLabelHierarchyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeHierarchy", ComputeHierarchy);
	Nan::SetPrototypeMethod(tpl, "computeHierarchy", ComputeHierarchy);

	Nan::SetPrototypeMethod(tpl, "GetBoundedSizes", GetBoundedSizes);
	Nan::SetPrototypeMethod(tpl, "getBoundedSizes", GetBoundedSizes);

	Nan::SetPrototypeMethod(tpl, "GetCenterPts", GetCenterPts);
	Nan::SetPrototypeMethod(tpl, "getCenterPts", GetCenterPts);

	Nan::SetPrototypeMethod(tpl, "GetCoincidentPoints", GetCoincidentPoints);
	Nan::SetPrototypeMethod(tpl, "getCoincidentPoints", GetCoincidentPoints);

	Nan::SetPrototypeMethod(tpl, "GetDiscreteNodeCoordinatesFromWorldPoint", GetDiscreteNodeCoordinatesFromWorldPoint);
	Nan::SetPrototypeMethod(tpl, "getDiscreteNodeCoordinatesFromWorldPoint", GetDiscreteNodeCoordinatesFromWorldPoint);

	Nan::SetPrototypeMethod(tpl, "GetIconIndices", GetIconIndices);
	Nan::SetPrototypeMethod(tpl, "getIconIndices", GetIconIndices);

	Nan::SetPrototypeMethod(tpl, "GetLabels", GetLabels);
	Nan::SetPrototypeMethod(tpl, "getLabels", GetLabels);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDepth", GetMaximumDepth);
	Nan::SetPrototypeMethod(tpl, "getMaximumDepth", GetMaximumDepth);

	Nan::SetPrototypeMethod(tpl, "GetOrientations", GetOrientations);
	Nan::SetPrototypeMethod(tpl, "getOrientations", GetOrientations);

	Nan::SetPrototypeMethod(tpl, "GetPriorities", GetPriorities);
	Nan::SetPrototypeMethod(tpl, "getPriorities", GetPriorities);

	Nan::SetPrototypeMethod(tpl, "GetSizes", GetSizes);
	Nan::SetPrototypeMethod(tpl, "getSizes", GetSizes);

	Nan::SetPrototypeMethod(tpl, "GetTargetLabelCount", GetTargetLabelCount);
	Nan::SetPrototypeMethod(tpl, "getTargetLabelCount", GetTargetLabelCount);

	Nan::SetPrototypeMethod(tpl, "GetTextProperty", GetTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTextProperty", GetTextProperty);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NewIterator", NewIterator);
	Nan::SetPrototypeMethod(tpl, "newIterator", NewIterator);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBoundedSizes", SetBoundedSizes);
	Nan::SetPrototypeMethod(tpl, "setBoundedSizes", SetBoundedSizes);

	Nan::SetPrototypeMethod(tpl, "SetIconIndices", SetIconIndices);
	Nan::SetPrototypeMethod(tpl, "setIconIndices", SetIconIndices);

	Nan::SetPrototypeMethod(tpl, "SetLabels", SetLabels);
	Nan::SetPrototypeMethod(tpl, "setLabels", SetLabels);

	Nan::SetPrototypeMethod(tpl, "SetMaximumDepth", SetMaximumDepth);
	Nan::SetPrototypeMethod(tpl, "setMaximumDepth", SetMaximumDepth);

	Nan::SetPrototypeMethod(tpl, "SetOrientations", SetOrientations);
	Nan::SetPrototypeMethod(tpl, "setOrientations", SetOrientations);

	Nan::SetPrototypeMethod(tpl, "SetPoints", SetPoints);
	Nan::SetPrototypeMethod(tpl, "setPoints", SetPoints);

	Nan::SetPrototypeMethod(tpl, "SetPriorities", SetPriorities);
	Nan::SetPrototypeMethod(tpl, "setPriorities", SetPriorities);

	Nan::SetPrototypeMethod(tpl, "SetSizes", SetSizes);
	Nan::SetPrototypeMethod(tpl, "setSizes", SetSizes);

	Nan::SetPrototypeMethod(tpl, "SetTargetLabelCount", SetTargetLabelCount);
	Nan::SetPrototypeMethod(tpl, "setTargetLabelCount", SetTargetLabelCount);

	Nan::SetPrototypeMethod(tpl, "SetTextProperty", SetTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTextProperty", SetTextProperty);

#ifdef VTK_NODE_PLUS_VTKLABELHIERARCHYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKLABELHIERARCHYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkLabelHierarchyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLabelHierarchy> native = vtkSmartPointer<vtkLabelHierarchy>::New();
		VtkLabelHierarchyWrap* obj = new VtkLabelHierarchyWrap(native);
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

void VtkLabelHierarchyWrap::ComputeHierarchy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeHierarchy();
}

void VtkLabelHierarchyWrap::GetBoundedSizes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundedSizes();
	VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetCenterPts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenterPts();
	VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetCoincidentPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkCoincidentPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoincidentPoints();
	VtkCoincidentPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoincidentPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoincidentPointsWrap *w = new VtkCoincidentPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetDiscreteNodeCoordinatesFromWorldPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetDiscreteNodeCoordinatesFromWorldPoint(
					(int *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					info[2]->Int32Value()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetDiscreteNodeCoordinatesFromWorldPoint(
					(int *)(a0->Buffer()->GetContents().Data()),
					b1,
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetDiscreteNodeCoordinatesFromWorldPoint(
					b0,
					b1,
					info[2]->Int32Value()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetDiscreteNodeCoordinatesFromWorldPoint(
					b0,
					(double *)(a1->Buffer()->GetContents().Data()),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::GetIconIndices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkIntArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIconIndices();
	VtkIntArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIntArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIntArrayWrap *w = new VtkIntArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkAbstractArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabels();
	VtkAbstractArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabelHierarchyWrap::GetMaximumDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabelHierarchyWrap::GetOrientations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientations();
	VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetPriorities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPriorities();
	VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetSizes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSizes();
	VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::GetTargetLabelCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetLabelCount();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabelHierarchyWrap::GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextProperty();
	VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	vtkLabelHierarchy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkLabelHierarchyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLabelHierarchyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabelHierarchyWrap *w = new VtkLabelHierarchyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyWrap::NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[1]))
		{
			VtkRendererWrap *a1 = ObjectWrap::Unwrap<VtkRendererWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkCameraWrap::ptpl))->HasInstance(info[2]))
			{
				VtkCameraWrap *a2 = ObjectWrap::Unwrap<VtkCameraWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsFloat64Array())
				{
					v8::Local<v8::Float64Array>a3(v8::Local<v8::Float64Array>::Cast(info[3]->ToObject()));
					if( a3->Length() < 24 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					if(info.Length() > 4 && info[4]->IsBoolean())
					{
						if(info.Length() > 5 && info[5]->IsFloat32Array())
						{
							v8::Local<v8::Float32Array>a5(v8::Local<v8::Float32Array>::Cast(info[5]->ToObject()));
							if( a5->Length() < 2 )
							{
								Nan::ThrowError("Array too short.");
								return;
							}

							vtkLabelHierarchyIterator * r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->NewIterator(
								info[0]->Int32Value(),
								(vtkRenderer *) a1->native.GetPointer(),
								(vtkCamera *) a2->native.GetPointer(),
								(double *)(a3->Buffer()->GetContents().Data()),
								info[4]->BooleanValue(),
								(float *)(a5->Buffer()->GetContents().Data())
							);
							VtkLabelHierarchyIteratorWrap::InitPtpl();
							v8::Local<v8::Value> argv[1] =
								{ Nan::New(vtkNodeJsNoWrap) };
							v8::Local<v8::Function> cons =
								Nan::New<v8::FunctionTemplate>(VtkLabelHierarchyIteratorWrap::ptpl)->GetFunction();
							v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
							VtkLabelHierarchyIteratorWrap *w = new VtkLabelHierarchyIteratorWrap();
							w->native = r;
							w->Wrap(wo);
							info.GetReturnValue().Set(wo);
							return;
						}
						else if(info.Length() > 5 && info[5]->IsArray())
						{
							v8::Local<v8::Array>a5(v8::Local<v8::Array>::Cast(info[5]->ToObject()));
							float b5[2];
							if( a5->Length() < 2 )
							{
								Nan::ThrowError("Array too short.");
								return;
							}

							for( i = 0; i < 2; i++ )
							{
								if( !a5->Get(i)->IsNumber() )
								{
									Nan::ThrowError("Array contents invalid.");
									return;
								}
								b5[i] = a5->Get(i)->NumberValue();
							}
							vtkLabelHierarchyIterator * r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->NewIterator(
								info[0]->Int32Value(),
								(vtkRenderer *) a1->native.GetPointer(),
								(vtkCamera *) a2->native.GetPointer(),
								(double *)(a3->Buffer()->GetContents().Data()),
								info[4]->BooleanValue(),
								b5
							);
							VtkLabelHierarchyIteratorWrap::InitPtpl();
							v8::Local<v8::Value> argv[1] =
								{ Nan::New(vtkNodeJsNoWrap) };
							v8::Local<v8::Function> cons =
								Nan::New<v8::FunctionTemplate>(VtkLabelHierarchyIteratorWrap::ptpl)->GetFunction();
							v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
							VtkLabelHierarchyIteratorWrap *w = new VtkLabelHierarchyIteratorWrap();
							w->native = r;
							w->Wrap(wo);
							info.GetReturnValue().Set(wo);
							return;
						}
					}
				}
				else if(info.Length() > 3 && info[3]->IsArray())
				{
					v8::Local<v8::Array>a3(v8::Local<v8::Array>::Cast(info[3]->ToObject()));
					double b3[24];
					if( a3->Length() < 24 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					for( i = 0; i < 24; i++ )
					{
						if( !a3->Get(i)->IsNumber() )
						{
							Nan::ThrowError("Array contents invalid.");
							return;
						}
						b3[i] = a3->Get(i)->NumberValue();
					}
					if(info.Length() > 4 && info[4]->IsBoolean())
					{
						if(info.Length() > 5 && info[5]->IsArray())
						{
							v8::Local<v8::Array>a5(v8::Local<v8::Array>::Cast(info[5]->ToObject()));
							float b5[2];
							if( a5->Length() < 2 )
							{
								Nan::ThrowError("Array too short.");
								return;
							}

							for( i = 0; i < 2; i++ )
							{
								if( !a5->Get(i)->IsNumber() )
								{
									Nan::ThrowError("Array contents invalid.");
									return;
								}
								b5[i] = a5->Get(i)->NumberValue();
							}
							vtkLabelHierarchyIterator * r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->NewIterator(
								info[0]->Int32Value(),
								(vtkRenderer *) a1->native.GetPointer(),
								(vtkCamera *) a2->native.GetPointer(),
								b3,
								info[4]->BooleanValue(),
								b5
							);
							VtkLabelHierarchyIteratorWrap::InitPtpl();
							v8::Local<v8::Value> argv[1] =
								{ Nan::New(vtkNodeJsNoWrap) };
							v8::Local<v8::Function> cons =
								Nan::New<v8::FunctionTemplate>(VtkLabelHierarchyIteratorWrap::ptpl)->GetFunction();
							v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
							VtkLabelHierarchyIteratorWrap *w = new VtkLabelHierarchyIteratorWrap();
							w->native = r;
							w->Wrap(wo);
							info.GetReturnValue().Set(wo);
							return;
						}
						else if(info.Length() > 5 && info[5]->IsFloat32Array())
						{
							v8::Local<v8::Float32Array>a5(v8::Local<v8::Float32Array>::Cast(info[5]->ToObject()));
							if( a5->Length() < 2 )
							{
								Nan::ThrowError("Array too short.");
								return;
							}

							vtkLabelHierarchyIterator * r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->NewIterator(
								info[0]->Int32Value(),
								(vtkRenderer *) a1->native.GetPointer(),
								(vtkCamera *) a2->native.GetPointer(),
								b3,
								info[4]->BooleanValue(),
								(float *)(a5->Buffer()->GetContents().Data())
							);
							VtkLabelHierarchyIteratorWrap::InitPtpl();
							v8::Local<v8::Value> argv[1] =
								{ Nan::New(vtkNodeJsNoWrap) };
							v8::Local<v8::Function> cons =
								Nan::New<v8::FunctionTemplate>(VtkLabelHierarchyIteratorWrap::ptpl)->GetFunction();
							v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
							VtkLabelHierarchyIteratorWrap *w = new VtkLabelHierarchyIteratorWrap();
							w->native = r;
							w->Wrap(wo);
							info.GetReturnValue().Set(wo);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkLabelHierarchy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkLabelHierarchyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLabelHierarchyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabelHierarchyWrap *w = new VtkLabelHierarchyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetBoundedSizes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundedSizes(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetIconIndices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIntArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIntArrayWrap *a0 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconIndices(
			(vtkIntArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabels(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetMaximumDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumDepth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetOrientations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientations(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoints(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetPriorities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPriorities(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetSizes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSizes(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetTargetLabelCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetLabelCount(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyWrap::SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyWrap>(info.Holder());
	vtkLabelHierarchy *native = (vtkLabelHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

