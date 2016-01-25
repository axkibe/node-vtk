/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkTableToGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMutableDirectedGraphWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkBitArrayWrap.h"
#include "vtkAlgorithmOutputWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTableToGraphWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTableToGraphWrap::ptpl;

VtkTableToGraphWrap::VtkTableToGraphWrap()
{ }

VtkTableToGraphWrap::VtkTableToGraphWrap(vtkSmartPointer<vtkTableToGraph> _native)
{ native = _native; }

VtkTableToGraphWrap::~VtkTableToGraphWrap()
{ }

void VtkTableToGraphWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTableToGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTableToGraph").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TableToGraph").ToLocalChecked(),tpl->GetFunction());
}

void VtkTableToGraphWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddLinkEdge", AddLinkEdge);
	Nan::SetPrototypeMethod(tpl, "addLinkEdge", AddLinkEdge);

	Nan::SetPrototypeMethod(tpl, "AddLinkVertex", AddLinkVertex);
	Nan::SetPrototypeMethod(tpl, "addLinkVertex", AddLinkVertex);

	Nan::SetPrototypeMethod(tpl, "ClearLinkEdges", ClearLinkEdges);
	Nan::SetPrototypeMethod(tpl, "clearLinkEdges", ClearLinkEdges);

	Nan::SetPrototypeMethod(tpl, "ClearLinkVertices", ClearLinkVertices);
	Nan::SetPrototypeMethod(tpl, "clearLinkVertices", ClearLinkVertices);

	Nan::SetPrototypeMethod(tpl, "DirectedOff", DirectedOff);
	Nan::SetPrototypeMethod(tpl, "directedOff", DirectedOff);

	Nan::SetPrototypeMethod(tpl, "DirectedOn", DirectedOn);
	Nan::SetPrototypeMethod(tpl, "directedOn", DirectedOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLinkGraph", GetLinkGraph);
	Nan::SetPrototypeMethod(tpl, "getLinkGraph", GetLinkGraph);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LinkColumnPath", LinkColumnPath);
	Nan::SetPrototypeMethod(tpl, "linkColumnPath", LinkColumnPath);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLinkGraph", SetLinkGraph);
	Nan::SetPrototypeMethod(tpl, "setLinkGraph", SetLinkGraph);

	Nan::SetPrototypeMethod(tpl, "SetVertexTableConnection", SetVertexTableConnection);
	Nan::SetPrototypeMethod(tpl, "setVertexTableConnection", SetVertexTableConnection);

}

void VtkTableToGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTableToGraph> native = vtkSmartPointer<vtkTableToGraph>::New();
		VtkTableToGraphWrap* obj = new VtkTableToGraphWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTableToGraphWrap::AddLinkEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddLinkEdge(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToGraphWrap::AddLinkVertex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->AddLinkVertex(
					*a0,
					*a1,
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToGraphWrap::ClearLinkEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearLinkEdges();
}

void VtkTableToGraphWrap::ClearLinkVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearLinkVertices();
}

void VtkTableToGraphWrap::DirectedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DirectedOff();
}

void VtkTableToGraphWrap::DirectedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DirectedOn();
}

void VtkTableToGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToGraphWrap::GetLinkGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	vtkMutableDirectedGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLinkGraph();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMutableDirectedGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMutableDirectedGraphWrap *w = new VtkMutableDirectedGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableToGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
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

void VtkTableToGraphWrap::LinkColumnPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkStringArrayWrap *a1 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkBitArrayWrap *a2 = ObjectWrap::Unwrap<VtkBitArrayWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->LinkColumnPath(
					(vtkStringArray *) a0->native.GetPointer(),
					(vtkStringArray *) a1->native.GetPointer(),
					(vtkBitArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	vtkTableToGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTableToGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableToGraphWrap *w = new VtkTableToGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableToGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTableToGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTableToGraphWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableToGraphWrap *w = new VtkTableToGraphWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToGraphWrap::SetLinkGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMutableDirectedGraphWrap *a0 = ObjectWrap::Unwrap<VtkMutableDirectedGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLinkGraph(
			(vtkMutableDirectedGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToGraphWrap::SetVertexTableConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToGraphWrap *wrapper = ObjectWrap::Unwrap<VtkTableToGraphWrap>(info.Holder());
	vtkTableToGraph *native = (vtkTableToGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVertexTableConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

