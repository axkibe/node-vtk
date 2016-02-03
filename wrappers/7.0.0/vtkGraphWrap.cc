/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetAttributesWrap.h"
#include "vtkPointsWrap.h"
#include "vtkEdgeListIteratorWrap.h"
#include "vtkVertexListIteratorWrap.h"
#include "vtkDistributedGraphHelperWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkGraphInternalsWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkFieldDataWrap.h"
#include "vtkDirectedGraphWrap.h"
#include "vtkUndirectedGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphWrap::ptpl;

VtkGraphWrap::VtkGraphWrap()
{ }

VtkGraphWrap::VtkGraphWrap(vtkSmartPointer<vtkGraph> _native)
{ native = _native; }

VtkGraphWrap::~VtkGraphWrap()
{ }

void VtkGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Graph").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CheckedDeepCopy", CheckedDeepCopy);
	Nan::SetPrototypeMethod(tpl, "checkedDeepCopy", CheckedDeepCopy);

	Nan::SetPrototypeMethod(tpl, "CheckedShallowCopy", CheckedShallowCopy);
	Nan::SetPrototypeMethod(tpl, "checkedShallowCopy", CheckedShallowCopy);

	Nan::SetPrototypeMethod(tpl, "ComputeBounds", ComputeBounds);
	Nan::SetPrototypeMethod(tpl, "computeBounds", ComputeBounds);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "DeepCopyEdgePoints", DeepCopyEdgePoints);
	Nan::SetPrototypeMethod(tpl, "deepCopyEdgePoints", DeepCopyEdgePoints);

	Nan::SetPrototypeMethod(tpl, "Dump", Dump);
	Nan::SetPrototypeMethod(tpl, "dump", Dump);

	Nan::SetPrototypeMethod(tpl, "GetAttributesAsFieldData", GetAttributesAsFieldData);
	Nan::SetPrototypeMethod(tpl, "getAttributesAsFieldData", GetAttributesAsFieldData);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetDistributedGraphHelper", GetDistributedGraphHelper);
	Nan::SetPrototypeMethod(tpl, "getDistributedGraphHelper", GetDistributedGraphHelper);

	Nan::SetPrototypeMethod(tpl, "GetEdgeData", GetEdgeData);
	Nan::SetPrototypeMethod(tpl, "getEdgeData", GetEdgeData);

	Nan::SetPrototypeMethod(tpl, "GetEdges", GetEdges);
	Nan::SetPrototypeMethod(tpl, "getEdges", GetEdges);

	Nan::SetPrototypeMethod(tpl, "GetGraphInternals", GetGraphInternals);
	Nan::SetPrototypeMethod(tpl, "getGraphInternals", GetGraphInternals);

	Nan::SetPrototypeMethod(tpl, "GetInducedEdges", GetInducedEdges);
	Nan::SetPrototypeMethod(tpl, "getInducedEdges", GetInducedEdges);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "GetVertexData", GetVertexData);
	Nan::SetPrototypeMethod(tpl, "getVertexData", GetVertexData);

	Nan::SetPrototypeMethod(tpl, "GetVertices", GetVertices);
	Nan::SetPrototypeMethod(tpl, "getVertices", GetVertices);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsSameStructure", IsSameStructure);
	Nan::SetPrototypeMethod(tpl, "isSameStructure", IsSameStructure);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDistributedGraphHelper", SetDistributedGraphHelper);
	Nan::SetPrototypeMethod(tpl, "setDistributedGraphHelper", SetDistributedGraphHelper);

	Nan::SetPrototypeMethod(tpl, "SetPoints", SetPoints);
	Nan::SetPrototypeMethod(tpl, "setPoints", SetPoints);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "ShallowCopyEdgePoints", ShallowCopyEdgePoints);
	Nan::SetPrototypeMethod(tpl, "shallowCopyEdgePoints", ShallowCopyEdgePoints);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

	Nan::SetPrototypeMethod(tpl, "ToDirectedGraph", ToDirectedGraph);
	Nan::SetPrototypeMethod(tpl, "toDirectedGraph", ToDirectedGraph);

	Nan::SetPrototypeMethod(tpl, "ToUndirectedGraph", ToUndirectedGraph);
	Nan::SetPrototypeMethod(tpl, "toUndirectedGraph", ToUndirectedGraph);

	ptpl.Reset( tpl );
}

void VtkGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkGraphWrap::CheckedDeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CheckedDeepCopy(
			(vtkGraph *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::CheckedShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CheckedShallowCopy(
			(vtkGraph *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeBounds();
}

void VtkGraphWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
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

void VtkGraphWrap::DeepCopyEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopyEdgePoints(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::Dump(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Dump();
}

void VtkGraphWrap::GetAttributesAsFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkFieldData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAttributesAsFieldData(
			info[0]->Int32Value()
		);
			VtkFieldDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFieldDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFieldDataWrap *w = new VtkFieldDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkGraph * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkGraphWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkGraphWrap *w = new VtkGraphWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphWrap *w = new VtkGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphWrap::GetDistributedGraphHelper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	vtkDistributedGraphHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistributedGraphHelper();
		VtkDistributedGraphHelperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDistributedGraphHelperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistributedGraphHelperWrap *w = new VtkDistributedGraphHelperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphWrap::GetEdgeData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	vtkDataSetAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeData();
		VtkDataSetAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetAttributesWrap *w = new VtkDataSetAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphWrap::GetEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkEdgeListIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkEdgeListIteratorWrap *a0 = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetEdges(
			(vtkEdgeListIterator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::GetGraphInternals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		vtkGraphInternals * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGraphInternals(
			info[0]->BooleanValue()
		);
			VtkGraphInternalsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphInternalsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphInternalsWrap *w = new VtkGraphInternalsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::GetInducedEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdTypeArrayWrap *a1 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetInducedEdges(
				(vtkIdTypeArray *) a0->native.GetPointer(),
				(vtkIdTypeArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
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

void VtkGraphWrap::GetVertexData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	vtkDataSetAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexData();
		VtkDataSetAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetAttributesWrap *w = new VtkDataSetAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphWrap::GetVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVertexListIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVertexListIteratorWrap *a0 = ObjectWrap::Unwrap<VtkVertexListIteratorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetVertices(
			(vtkVertexListIterator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
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

void VtkGraphWrap::IsSameStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsSameStructure(
			(vtkGraph *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphWrap *w = new VtkGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::SetDistributedGraphHelper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDistributedGraphHelperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDistributedGraphHelperWrap *a0 = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistributedGraphHelper(
			(vtkDistributedGraphHelper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
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

void VtkGraphWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
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

void VtkGraphWrap::ShallowCopyEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopyEdgePoints(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

void VtkGraphWrap::ToDirectedGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDirectedGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDirectedGraphWrap *a0 = ObjectWrap::Unwrap<VtkDirectedGraphWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ToDirectedGraph(
			(vtkDirectedGraph *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphWrap::ToUndirectedGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphWrap *wrapper = ObjectWrap::Unwrap<VtkGraphWrap>(info.Holder());
	vtkGraph *native = (vtkGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkUndirectedGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkUndirectedGraphWrap *a0 = ObjectWrap::Unwrap<VtkUndirectedGraphWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ToUndirectedGraph(
			(vtkUndirectedGraph *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

