/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSelectionNodeWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSelectionWrap::ptpl;

VtkSelectionWrap::VtkSelectionWrap()
{ }

VtkSelectionWrap::VtkSelectionWrap(vtkSmartPointer<vtkSelection> _native)
{ native = _native; }

VtkSelectionWrap::~VtkSelectionWrap()
{ }

void VtkSelectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSelection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Selection").ToLocalChecked(), ConstructorGetter);
}

void VtkSelectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSelectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSelectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddNode", AddNode);
	Nan::SetPrototypeMethod(tpl, "addNode", AddNode);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "Dump", Dump);
	Nan::SetPrototypeMethod(tpl, "dump", Dump);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllNodes", RemoveAllNodes);
	Nan::SetPrototypeMethod(tpl, "removeAllNodes", RemoveAllNodes);

	Nan::SetPrototypeMethod(tpl, "RemoveNode", RemoveNode);
	Nan::SetPrototypeMethod(tpl, "removeNode", RemoveNode);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Subtract", Subtract);
	Nan::SetPrototypeMethod(tpl, "subtract", Subtract);

	Nan::SetPrototypeMethod(tpl, "Union", Union);
	Nan::SetPrototypeMethod(tpl, "union", Union);

	ptpl.Reset( tpl );
}

void VtkSelectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSelection> native = vtkSmartPointer<vtkSelection>::New();
		VtkSelectionWrap* obj = new VtkSelectionWrap(native);
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

void VtkSelectionWrap::AddNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddNode(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
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

void VtkSelectionWrap::Dump(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Dump();
}

void VtkSelectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectionWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkSelection * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkSelectionWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkSelectionWrap *w = new VtkSelectionWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkSelection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkSelectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectionWrap *w = new VtkSelectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkSelectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
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

void VtkSelectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectionWrap::RemoveAllNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllNodes();
}

void VtkSelectionWrap::RemoveNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveNode(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSelection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSelectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectionWrap *w = new VtkSelectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
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

void VtkSelectionWrap::Subtract(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Subtract(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Subtract(
			(vtkSelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionWrap::Union(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionWrap>(info.Holder());
	vtkSelection *native = (vtkSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Union(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Union(
			(vtkSelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

