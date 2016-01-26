/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkHyperOctreeCursorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeCursorWrap::ptpl;

VtkHyperOctreeCursorWrap::VtkHyperOctreeCursorWrap()
{ }

VtkHyperOctreeCursorWrap::VtkHyperOctreeCursorWrap(vtkSmartPointer<vtkHyperOctreeCursor> _native)
{ native = _native; }

VtkHyperOctreeCursorWrap::~VtkHyperOctreeCursorWrap()
{ }

void VtkHyperOctreeCursorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctreeCursor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctreeCursor").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeCursorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeCursorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeCursorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Clone", Clone);
	Nan::SetPrototypeMethod(tpl, "clone", Clone);

	Nan::SetPrototypeMethod(tpl, "CurrentIsLeaf", CurrentIsLeaf);
	Nan::SetPrototypeMethod(tpl, "currentIsLeaf", CurrentIsLeaf);

	Nan::SetPrototypeMethod(tpl, "CurrentIsRoot", CurrentIsRoot);
	Nan::SetPrototypeMethod(tpl, "currentIsRoot", CurrentIsRoot);

	Nan::SetPrototypeMethod(tpl, "CurrentIsTerminalNode", CurrentIsTerminalNode);
	Nan::SetPrototypeMethod(tpl, "currentIsTerminalNode", CurrentIsTerminalNode);

	Nan::SetPrototypeMethod(tpl, "Found", Found);
	Nan::SetPrototypeMethod(tpl, "found", Found);

	Nan::SetPrototypeMethod(tpl, "GetChildIndex", GetChildIndex);
	Nan::SetPrototypeMethod(tpl, "getChildIndex", GetChildIndex);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentLevel", GetCurrentLevel);
	Nan::SetPrototypeMethod(tpl, "getCurrentLevel", GetCurrentLevel);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetIndex", GetIndex);
	Nan::SetPrototypeMethod(tpl, "getIndex", GetIndex);

	Nan::SetPrototypeMethod(tpl, "GetLeafId", GetLeafId);
	Nan::SetPrototypeMethod(tpl, "getLeafId", GetLeafId);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfChildren", GetNumberOfChildren);
	Nan::SetPrototypeMethod(tpl, "getNumberOfChildren", GetNumberOfChildren);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsEqual", IsEqual);
	Nan::SetPrototypeMethod(tpl, "isEqual", IsEqual);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SameTree", SameTree);
	Nan::SetPrototypeMethod(tpl, "sameTree", SameTree);

	Nan::SetPrototypeMethod(tpl, "ToChild", ToChild);
	Nan::SetPrototypeMethod(tpl, "toChild", ToChild);

	Nan::SetPrototypeMethod(tpl, "ToParent", ToParent);
	Nan::SetPrototypeMethod(tpl, "toParent", ToParent);

	Nan::SetPrototypeMethod(tpl, "ToRoot", ToRoot);
	Nan::SetPrototypeMethod(tpl, "toRoot", ToRoot);

	Nan::SetPrototypeMethod(tpl, "ToSameNode", ToSameNode);
	Nan::SetPrototypeMethod(tpl, "toSameNode", ToSameNode);

	ptpl.Reset( tpl );
}

void VtkHyperOctreeCursorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperOctreeCursorWrap::Clone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	vtkHyperOctreeCursor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Clone();
		VtkHyperOctreeCursorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeCursorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeCursorWrap *w = new VtkHyperOctreeCursorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeCursorWrap::CurrentIsLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CurrentIsLeaf();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::CurrentIsRoot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CurrentIsRoot();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::CurrentIsTerminalNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CurrentIsTerminalNode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::Found(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Found();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::GetChildIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetChildIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperOctreeCursorWrap::GetCurrentLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::GetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetIndex(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeCursorWrap::GetLeafId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::GetNumberOfChildren(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfChildren();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeCursorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
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

void VtkHyperOctreeCursorWrap::IsEqual(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsEqual(
			(vtkHyperOctreeCursor *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeCursorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	vtkHyperOctreeCursor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHyperOctreeCursorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeCursorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeCursorWrap *w = new VtkHyperOctreeCursorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeCursorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctreeCursor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHyperOctreeCursorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeCursorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeCursorWrap *w = new VtkHyperOctreeCursorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeCursorWrap::SameTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SameTree(
			(vtkHyperOctreeCursor *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeCursorWrap::ToChild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ToChild(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeCursorWrap::ToParent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToParent();
}

void VtkHyperOctreeCursorWrap::ToRoot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToRoot();
}

void VtkHyperOctreeCursorWrap::ToSameNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeCursorWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info.Holder());
	vtkHyperOctreeCursor *native = (vtkHyperOctreeCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ToSameNode(
			(vtkHyperOctreeCursor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

