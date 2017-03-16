/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCollectionWrap.h"
#include "vtkSocketCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSocketWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSocketCollectionWrap::ptpl;

VtkSocketCollectionWrap::VtkSocketCollectionWrap()
{ }

VtkSocketCollectionWrap::VtkSocketCollectionWrap(vtkSmartPointer<vtkSocketCollection> _native)
{ native = _native; }

VtkSocketCollectionWrap::~VtkSocketCollectionWrap()
{ }

void VtkSocketCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSocketCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SocketCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkSocketCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSocketCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSocketCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLastSelectedSocket", GetLastSelectedSocket);
	Nan::SetPrototypeMethod(tpl, "getLastSelectedSocket", GetLastSelectedSocket);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllItems", RemoveAllItems);
	Nan::SetPrototypeMethod(tpl, "removeAllItems", RemoveAllItems);

	Nan::SetPrototypeMethod(tpl, "RemoveItem", RemoveItem);
	Nan::SetPrototypeMethod(tpl, "removeItem", RemoveItem);

	Nan::SetPrototypeMethod(tpl, "ReplaceItem", ReplaceItem);
	Nan::SetPrototypeMethod(tpl, "replaceItem", ReplaceItem);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectSockets", SelectSockets);
	Nan::SetPrototypeMethod(tpl, "selectSockets", SelectSockets);

#ifdef VTK_NODE_PLUS_VTKSOCKETCOLLECTIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSOCKETCOLLECTIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSocketCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSocketCollection> native = vtkSmartPointer<vtkSocketCollection>::New();
		VtkSocketCollectionWrap* obj = new VtkSocketCollectionWrap(native);
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

void VtkSocketCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSocketWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSocketWrap *a0 = ObjectWrap::Unwrap<VtkSocketWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkSocket *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSocketCollectionWrap::GetLastSelectedSocket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	vtkSocket * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastSelectedSocket();
	VtkSocketWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSocketWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSocketWrap *w = new VtkSocketWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSocketCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
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

void VtkSocketCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	vtkSocketCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSocketCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSocketCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSocketCollectionWrap *w = new VtkSocketCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSocketCollectionWrap::RemoveAllItems(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllItems();
}

void VtkSocketCollectionWrap::RemoveItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveItem(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveItem(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCollectionWrap::ReplaceItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkObjectWrap *a1 = ObjectWrap::Unwrap<VtkObjectWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ReplaceItem(
				info[0]->Int32Value(),
				(vtkObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSocketCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSocketCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSocketCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSocketCollectionWrap *w = new VtkSocketCollectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSocketCollectionWrap::SelectSockets(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSocketCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkSocketCollectionWrap>(info.Holder());
	vtkSocketCollection *native = (vtkSocketCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SelectSockets(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

