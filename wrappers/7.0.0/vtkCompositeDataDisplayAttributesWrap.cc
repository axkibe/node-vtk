/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCompositeDataDisplayAttributesWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeDataDisplayAttributesWrap::ptpl;

VtkCompositeDataDisplayAttributesWrap::VtkCompositeDataDisplayAttributesWrap()
{ }

VtkCompositeDataDisplayAttributesWrap::VtkCompositeDataDisplayAttributesWrap(vtkSmartPointer<vtkCompositeDataDisplayAttributes> _native)
{ native = _native; }

VtkCompositeDataDisplayAttributesWrap::~VtkCompositeDataDisplayAttributesWrap()
{ }

void VtkCompositeDataDisplayAttributesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeDataDisplayAttributes").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeDataDisplayAttributes").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeDataDisplayAttributesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeDataDisplayAttributesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeDataDisplayAttributesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeVisibleBounds", ComputeVisibleBounds);
	Nan::SetPrototypeMethod(tpl, "computeVisibleBounds", ComputeVisibleBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "HasBlockColors", HasBlockColors);
	Nan::SetPrototypeMethod(tpl, "hasBlockColors", HasBlockColors);

	Nan::SetPrototypeMethod(tpl, "HasBlockOpacities", HasBlockOpacities);
	Nan::SetPrototypeMethod(tpl, "hasBlockOpacities", HasBlockOpacities);

	Nan::SetPrototypeMethod(tpl, "HasBlockVisibilities", HasBlockVisibilities);
	Nan::SetPrototypeMethod(tpl, "hasBlockVisibilities", HasBlockVisibilities);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockColors", RemoveBlockColors);
	Nan::SetPrototypeMethod(tpl, "removeBlockColors", RemoveBlockColors);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockOpacities", RemoveBlockOpacities);
	Nan::SetPrototypeMethod(tpl, "removeBlockOpacities", RemoveBlockOpacities);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockVisibilites", RemoveBlockVisibilites);
	Nan::SetPrototypeMethod(tpl, "removeBlockVisibilites", RemoveBlockVisibilites);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkCompositeDataDisplayAttributesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositeDataDisplayAttributes> native = vtkSmartPointer<vtkCompositeDataDisplayAttributes>::New();
		VtkCompositeDataDisplayAttributesWrap* obj = new VtkCompositeDataDisplayAttributesWrap(native);
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

void VtkCompositeDataDisplayAttributesWrap::ComputeVisibleBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataDisplayAttributesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataDisplayAttributesWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 6 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->ComputeVisibleBounds(
					(vtkCompositeDataDisplayAttributes *) a0->native.GetPointer(),
					(vtkDataObject *) a1->native.GetPointer(),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				double b2[6];
				if( a2->Length() < 6 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 6; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->ComputeVisibleBounds(
					(vtkCompositeDataDisplayAttributes *) a0->native.GetPointer(),
					(vtkDataObject *) a1->native.GetPointer(),
					b2
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasBlockColors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasBlockOpacities();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockVisibilities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasBlockVisibilities();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataDisplayAttributesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
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

void VtkCompositeDataDisplayAttributesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	vtkCompositeDataDisplayAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCompositeDataDisplayAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataDisplayAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockColors();
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockOpacities();
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockVisibilites(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockVisibilites();
}

void VtkCompositeDataDisplayAttributesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeDataDisplayAttributes * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCompositeDataDisplayAttributesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeDataDisplayAttributesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

