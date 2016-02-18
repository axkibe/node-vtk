/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContextItemWrap.h"
#include "vtkTreeHeatmapItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTreeWrap.h"
#include "vtkTableWrap.h"
#include "vtkDendrogramItemWrap.h"
#include "vtkHeatmapItemWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTreeHeatmapItemWrap::ptpl;

VtkTreeHeatmapItemWrap::VtkTreeHeatmapItemWrap()
{ }

VtkTreeHeatmapItemWrap::VtkTreeHeatmapItemWrap(vtkSmartPointer<vtkTreeHeatmapItem> _native)
{ native = _native; }

VtkTreeHeatmapItemWrap::~VtkTreeHeatmapItemWrap()
{ }

void VtkTreeHeatmapItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTreeHeatmapItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TreeHeatmapItem").ToLocalChecked(), ConstructorGetter);
}

void VtkTreeHeatmapItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTreeHeatmapItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTreeHeatmapItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CollapseToNumberOfLeafNodes", CollapseToNumberOfLeafNodes);
	Nan::SetPrototypeMethod(tpl, "collapseToNumberOfLeafNodes", CollapseToNumberOfLeafNodes);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColumnTree", GetColumnTree);
	Nan::SetPrototypeMethod(tpl, "getColumnTree", GetColumnTree);

	Nan::SetPrototypeMethod(tpl, "GetDendrogram", GetDendrogram);
	Nan::SetPrototypeMethod(tpl, "getDendrogram", GetDendrogram);

	Nan::SetPrototypeMethod(tpl, "GetHeatmap", GetHeatmap);
	Nan::SetPrototypeMethod(tpl, "getHeatmap", GetHeatmap);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetPrunedTree", GetPrunedTree);
	Nan::SetPrototypeMethod(tpl, "getPrunedTree", GetPrunedTree);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "GetTable", GetTable);
	Nan::SetPrototypeMethod(tpl, "getTable", GetTable);

	Nan::SetPrototypeMethod(tpl, "GetTree", GetTree);
	Nan::SetPrototypeMethod(tpl, "getTree", GetTree);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReorderTable", ReorderTable);
	Nan::SetPrototypeMethod(tpl, "reorderTable", ReorderTable);

	Nan::SetPrototypeMethod(tpl, "ReverseTableColumns", ReverseTableColumns);
	Nan::SetPrototypeMethod(tpl, "reverseTableColumns", ReverseTableColumns);

	Nan::SetPrototypeMethod(tpl, "ReverseTableRows", ReverseTableRows);
	Nan::SetPrototypeMethod(tpl, "reverseTableRows", ReverseTableRows);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColumnTree", SetColumnTree);
	Nan::SetPrototypeMethod(tpl, "setColumnTree", SetColumnTree);

	Nan::SetPrototypeMethod(tpl, "SetDendrogram", SetDendrogram);
	Nan::SetPrototypeMethod(tpl, "setDendrogram", SetDendrogram);

	Nan::SetPrototypeMethod(tpl, "SetHeatmap", SetHeatmap);
	Nan::SetPrototypeMethod(tpl, "setHeatmap", SetHeatmap);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetTable", SetTable);
	Nan::SetPrototypeMethod(tpl, "setTable", SetTable);

	Nan::SetPrototypeMethod(tpl, "SetTree", SetTree);
	Nan::SetPrototypeMethod(tpl, "setTree", SetTree);

	Nan::SetPrototypeMethod(tpl, "SetTreeColorArray", SetTreeColorArray);
	Nan::SetPrototypeMethod(tpl, "setTreeColorArray", SetTreeColorArray);

#ifdef VTK_NODE_PLUS_VTKTREEHEATMAPITEMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTREEHEATMAPITEMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTreeHeatmapItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTreeHeatmapItem> native = vtkSmartPointer<vtkTreeHeatmapItem>::New();
		VtkTreeHeatmapItemWrap* obj = new VtkTreeHeatmapItemWrap(native);
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

void VtkTreeHeatmapItemWrap::CollapseToNumberOfLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CollapseToNumberOfLeafNodes(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
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
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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

void VtkTreeHeatmapItemWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetCenter(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->GetCenter(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeHeatmapItemWrap::GetColumnTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColumnTree();
	VtkTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeHeatmapItemWrap::GetDendrogram(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	vtkDendrogramItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDendrogram();
	VtkDendrogramItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDendrogramItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDendrogramItemWrap *w = new VtkDendrogramItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeHeatmapItemWrap::GetHeatmap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	vtkHeatmapItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeatmap();
	VtkHeatmapItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHeatmapItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHeatmapItemWrap *w = new VtkHeatmapItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeHeatmapItemWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeHeatmapItemWrap::GetPrunedTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPrunedTree();
	VtkTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeHeatmapItemWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetSize(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->GetSize(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTable();
	VtkTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeHeatmapItemWrap::GetTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTree();
	VtkTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeHeatmapItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
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

void VtkTreeHeatmapItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	vtkTreeHeatmapItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTreeHeatmapItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeHeatmapItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeHeatmapItemWrap *w = new VtkTreeHeatmapItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeHeatmapItemWrap::ReorderTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReorderTable();
}

void VtkTreeHeatmapItemWrap::ReverseTableColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseTableColumns();
}

void VtkTreeHeatmapItemWrap::ReverseTableRows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseTableRows();
}

void VtkTreeHeatmapItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTreeHeatmapItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTreeHeatmapItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTreeHeatmapItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeHeatmapItemWrap *w = new VtkTreeHeatmapItemWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::SetColumnTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTreeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColumnTree(
			(vtkTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::SetDendrogram(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDendrogramItemWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDendrogramItemWrap *a0 = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDendrogram(
			(vtkDendrogramItem *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::SetHeatmap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHeatmapItemWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHeatmapItemWrap *a0 = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeatmap(
			(vtkHeatmapItem *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTable(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::SetTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTreeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTree(
			(vtkTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeHeatmapItemWrap::SetTreeColorArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkTreeHeatmapItemWrap>(info.Holder());
	vtkTreeHeatmapItem *native = (vtkTreeHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTreeColorArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

